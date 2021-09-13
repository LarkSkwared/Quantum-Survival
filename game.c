#include<string.h>

#include"include/functions.h"
#include"assets/sprites.h"
#include"assets/backgrounds.h"

// ============ Function definitions ============

void sprites_init();
void sprites_end(int number_of_sprites);

// ============ Game function definitions ============

object quantum_bounce(object OBJ1, collision_box CBOX1, object OBJ2, collision_box CBOX2);
int random_switch();

// ============ Global stats ============

int time_score=0;

// ============ Levels ============

int main();
int level();
int game_end();
int game_over();

// ============ Menu ============

int main()
{
    // Load background
    memcpy(vid_mem,titleBitmap,titleBitmapLen);

    REG_BG0CNT=BG_CBB(0)|BG_CBB(30)|BG_4BPP|BG_REG_32x64;
    REG_DISPCNT=DCNT_MODE3|DCNT_BG2;

    while(1)
        {
        vid_vsync();
        key_poll();

        if(key_hit(KEY_START))
            level();
        }

return 0;
}

// ============ Game Over ============

int game_end()
{
    tte_init_se_default(0,BG_CBB(0)|BG_SBB(31));
    tte_init_con();
    REG_DISPCNT=DCNT_MODE0|DCNT_BG0;

    int otime=0;
    u32 sec=timer_set();

    while(1)
        {
        vid_vsync();
        key_poll();
        
        tte_printf("#{P:40,76}You lasted %02d seconds",time_score/60);

        // === timer ===

        sec=timer_set();
        otime=timer(sec,otime);

        if(otime>=180)
            game_over();
        }

return 0;
}

int game_over()
{
    if(time_score<1500)
        memcpy(vid_mem,game_overBitmap,game_overBitmapLen);
    if(time_score>=1500)
        memcpy(vid_mem,winBitmap,winBitmapLen);

    REG_BG0CNT=BG_CBB(0)|BG_CBB(30)|BG_4BPP|BG_REG_64x64;
    REG_DISPCNT=DCNT_MODE3|DCNT_BG2;

    while(1)
        {
        vid_vsync();
        key_poll();

        if(key_hit(KEY_START))
            level();
        if(key_hit(KEY_SELECT))
            main();
        }
}

// ============ Level ============

int level()
{
    // === Objects ===
    
    object player;
    object obstacle1;
    object obstacle2;
    object obstacle3;
    object obstacle4;
    object obstacle5;

    // === Collision boxes ===

    collision_box player_box;
    collision_box obstacle1_box;
    collision_box obstacle2_box;
    collision_box obstacle3_box;
    collision_box obstacle4_box;
    collision_box obstacle5_box;

    // === Local stats ===

    int life=250;
    time_score=0;
    
    // === Video init ===

    sprites_init();

    tte_init_se_default(0,BG_CBB(0)|BG_SBB(31));
    tte_init_con();
    REG_DISPCNT=DCNT_OBJ|DCNT_OBJ_1D|DCNT_MODE0|DCNT_BG0;
    

    // === Objects initialization ===

    player=object_init_32(player,104,64,32,32,0,0,0);
    obstacle1=object_init_64(obstacle1,qran_range(0,240),qran_range(0,160),64,64,96,0,1);
    obstacle2=object_init_64(obstacle2,qran_range(0,240),qran_range(0,160),64,64,96,0,2);
    obstacle3=object_init_32(obstacle3,qran_range(0,240),qran_range(0,160),32,32,64,0,3);
    obstacle4=object_init_32(obstacle4,qran_range(0,240),qran_range(0,160),32,32,64,0,4);
    obstacle5=object_init_32(obstacle5,qran_range(0,240),qran_range(0,160),32,32,64,0,5);

    // === Collision boxes set ===

    player_box=collision_box_set(player_box,32,16,0,8);
    obstacle1_box=collision_box_set(obstacle1_box,56,56,4,4);
    obstacle2_box=collision_box_set(obstacle2_box,56,56,4,4);
    obstacle3_box=collision_box_set(obstacle3_box,24,24,4,4);
    obstacle4_box=collision_box_set(obstacle4_box,24,24,4,4);
    obstacle5_box=collision_box_set(obstacle5_box,24,24,4,4);

    // === Objects motion initialization ===

    obstacle1=object_motion(obstacle1,random_switch(),random_switch());
    obstacle2=object_motion(obstacle2,random_switch(),random_switch());
    obstacle3=object_motion(obstacle3,random_switch(),random_switch());
    obstacle4=object_motion(obstacle4,random_switch(),random_switch());
    obstacle5=object_motion(obstacle5,random_switch(),random_switch());

    // === timer ===

    u32 sec=timer_set();

    // === Main game loop ===

    while(1)
        {
        vid_vsync();
        key_poll();

        // === UI ===

        // Life

        tte_printf("#{P:2,0}Life: %03d",life);

        // timer

        sec=timer_set();

        time_score=timer(sec,time_score);

        tte_printf("#{P:160,0} Time: %02d",time_score/60);

        // === Game conditions ===

        // Game over
        if(life<=0)
            {
            tte_printf("#{P:0,0}          "); // Delete UI
            tte_printf("#{P:160,0}            "); // Delete UI
            game_end();
            }

        // === Player screen bound and motion===
        
        if(player.x<0-player.width)
            player=object_position(player,SCREEN_WIDTH,player.y);
        else if(player.x>SCREEN_WIDTH)
            player=object_position(player,0-player.width,player.y);
        else if(player.y<0-player.height)
            player=object_position(player,player.x,SCREEN_HEIGHT);
        else if(player.y>SCREEN_HEIGHT)
            player=object_position(player,player.x,0-player.height);
        else
            player=object_player_motion(player,3,3);

        // "Quantum jump" (jump to a random position inside the screen)
        if(key_hit(KEY_B))
            player=object_position(player,qran_range(0,240),qran_range(0,160));

        // Sprite and collision change

        if(key_hit(KEY_RIGHT))
            {
            player.tid=0;
            player_box=collision_box_set(player_box,32,16,0,8);
            }

        if(key_hit(KEY_LEFT))
            {
            player.tid=16;
            player_box=collision_box_set(player_box,32,16,0,8);
            }

        if(key_hit(KEY_UP))
            {
            player.tid=32;
            player_box=collision_box_set(player_box,16,32,8,0);
            }

        if(key_hit(KEY_DOWN))
            {
            player.tid=48;
            player_box=collision_box_set(player_box,16,32,8,0);
            }

        // === Obstacles screen bound ===

        obstacle1=object_edge_bound(obstacle1,0,SCREEN_WIDTH,0,SCREEN_HEIGHT);
        obstacle2=object_edge_bound(obstacle2,0,SCREEN_WIDTH,0,SCREEN_HEIGHT);
        obstacle3=object_edge_bound(obstacle3,0,SCREEN_WIDTH,0,SCREEN_HEIGHT);
        obstacle4=object_edge_bound(obstacle4,0,SCREEN_WIDTH,0,SCREEN_HEIGHT);
        obstacle5=object_edge_bound(obstacle5,0,SCREEN_WIDTH,0,SCREEN_HEIGHT);

        // === Collision between obstacles ===

        // Obstacle 1

        obstacle1=quantum_bounce(obstacle1,obstacle1_box,obstacle2,obstacle2_box);
        obstacle1=quantum_bounce(obstacle1,obstacle1_box,obstacle3,obstacle3_box);
        obstacle1=quantum_bounce(obstacle1,obstacle1_box,obstacle4,obstacle4_box);
        obstacle1=quantum_bounce(obstacle1,obstacle1_box,obstacle5,obstacle5_box);

        // Obstacle 2

        obstacle2=quantum_bounce(obstacle2,obstacle2_box,obstacle1,obstacle1_box);
        obstacle2=quantum_bounce(obstacle2,obstacle2_box,obstacle3,obstacle3_box);
        obstacle2=quantum_bounce(obstacle2,obstacle2_box,obstacle4,obstacle4_box);
        obstacle2=quantum_bounce(obstacle2,obstacle2_box,obstacle5,obstacle5_box);

        // Obstacle 3

        obstacle3=quantum_bounce(obstacle3,obstacle3_box,obstacle1,obstacle1_box);
        obstacle3=quantum_bounce(obstacle3,obstacle3_box,obstacle2,obstacle2_box);
        obstacle3=quantum_bounce(obstacle3,obstacle3_box,obstacle4,obstacle4_box);
        obstacle3=quantum_bounce(obstacle3,obstacle3_box,obstacle5,obstacle5_box);

        // Obstacle 4

        obstacle4=quantum_bounce(obstacle4,obstacle4_box,obstacle1,obstacle1_box);
        obstacle4=quantum_bounce(obstacle4,obstacle4_box,obstacle2,obstacle2_box);
        obstacle4=quantum_bounce(obstacle4,obstacle4_box,obstacle3,obstacle3_box);
        obstacle4=quantum_bounce(obstacle4,obstacle4_box,obstacle5,obstacle5_box);

        // Obstacle 5

        obstacle5=quantum_bounce(obstacle5,obstacle5_box,obstacle1,obstacle1_box);
        obstacle5=quantum_bounce(obstacle5,obstacle5_box,obstacle2,obstacle2_box);
        obstacle5=quantum_bounce(obstacle5,obstacle5_box,obstacle3,obstacle3_box);
        obstacle5=quantum_bounce(obstacle5,obstacle5_box,obstacle4,obstacle4_box);

        // === Player collision with obstacles ===

        // Player x obstacle 1
        if(collision_check_rectangle(player,player_box,obstacle1,obstacle1_box)==1)
            life--;
        // Player x obstacle 2
        else if(collision_check_rectangle(player,player_box,obstacle2,obstacle2_box)==1)
            life--;
        // Player x obstacle 3
        else if(collision_check_rectangle(player,player_box,obstacle3,obstacle3_box)==1)
            life--;
        // Player x obstacle 4
        else if(collision_check_rectangle(player,player_box,obstacle4,obstacle4_box)==1)
            life--;
        // Player x obstacle 5
        else if(collision_check_rectangle(player,player_box,obstacle5,obstacle5_box)==1)
            life--;

        sprites_end(7);
        }

return time_score;
}

// ============ Sprite memory functions ============

// Put this before enabling video modes
void sprites_init()
{
    // === Sprites ===

    memcpy(&tile_mem[4][0],playerTiles,playerTilesLen);                 // Player sprite
    memcpy(&tile_mem[4][64],obstacleTiles,obstacleTilesLen);            // Obstacle sprite
    memcpy(&tile_mem[4][96],obstacle_bigTiles,obstacle_bigTilesLen);    // Big obstacle sprite
    
    // === Sprites palette ===
    memcpy(pal_obj_mem,playerPal,playerPalLen);

    // === Sprites update ===
    oam_init(obj_buffer,128);
}

// Put this at the end of main loop
void sprites_end(int number_of_sprites)
{
    oam_copy(oam_mem,obj_buffer,number_of_sprites); // Update number of sprites on screen
}

// ============ Game functions ============

object quantum_bounce(object OBJ1, collision_box CBOX1, object OBJ2, collision_box CBOX2)
{
    if(collision_check_rectangle(OBJ1,CBOX1,OBJ2,CBOX2)==1)
        {
        // Obstacle
        OBJ1=object_position(OBJ1,qran_range(0,SCREEN_WIDTH-OBJ1.width),qran_range(0,SCREEN_HEIGHT-OBJ1.height));
        OBJ1=object_motion(OBJ1,random_switch(),random_switch());
        }

return OBJ1;
}

int random_switch()
{
    int in=qran_range(0,3), out;

    if(in==0)
        out=1;
    if(in==1)
        out=2;
    if(in==2)
        out=-1;
    if(in==3)
        out=-2;

return out;
}
