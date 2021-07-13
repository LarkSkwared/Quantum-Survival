#include"types.h"

OBJ_ATTR obj_buffer[128];
OBJ_AFFINE *obj_aff_buffer=(OBJ_AFFINE*)obj_buffer;


// ============ Object Functions ============

// Goes before main loop
object object_init_32(object OBJ, int pos_x, int pos_y, int height, int width, int tid, int pb, int id)
{
    OBJ.object=&obj_buffer[id];
    OBJ.x=pos_x;
    OBJ.y=pos_y;
    OBJ.tid=tid;
    OBJ.pb=pb;
    OBJ.height=height;
    OBJ.width=width;

    obj_set_attr(OBJ.object,
                ATTR0_SQUARE,           // Square, regular sprite
                ATTR1_SIZE_32,          // 32x32
                ATTR2_PALBANK(OBJ.pb)|OBJ.tid); // palbank 0, tile 0

    OBJ.object->attr2=ATTR2_BUILD(OBJ.tid,OBJ.pb,0);
    obj_set_pos(OBJ.object,OBJ.x,OBJ.y);   // Set initial position

    return OBJ;
}

object object_init_64(object OBJ, int pos_x, int pos_y, int height, int width, int tid, int pb, int id)
{
    OBJ.object=&obj_buffer[id];
    OBJ.x=pos_x;
    OBJ.y=pos_y;
    OBJ.tid=tid;
    OBJ.pb=pb;
    OBJ.height=height;
    OBJ.width=width;

    obj_set_attr(OBJ.object,
                ATTR0_SQUARE,           // Square, regular sprite
                ATTR1_SIZE_64,          // 64x64
                ATTR2_PALBANK(OBJ.pb)|OBJ.tid); // palbank 0, tile 0

    OBJ.object->attr2=ATTR2_BUILD(OBJ.tid,OBJ.pb,0);
    obj_set_pos(OBJ.object,OBJ.x,OBJ.y);   // Set initial position

    return OBJ;
}

// Goes inside main loop
object object_position(object OBJ,int x, int y)
{
    OBJ.x=x;
    OBJ.y=y;

    OBJ.object->attr2=ATTR2_BUILD(OBJ.tid,OBJ.pb,0);
    obj_set_pos(OBJ.object,OBJ.x,OBJ.y);   // Update position

    return OBJ;
}

// Goes inside main loop
object object_player_motion(object OBJ, int speed_x, int speed_y)
{
    OBJ.speed_x=speed_x;
    OBJ.speed_y=speed_y;
    
    OBJ.x+=OBJ.speed_x*key_tri_horz(); // Move left/right
    OBJ.y+=OBJ.speed_y*key_tri_vert(); // Move up/down

    OBJ.object->attr2=ATTR2_BUILD(OBJ.tid,OBJ.pb,0);
    obj_set_pos(OBJ.object,OBJ.x,OBJ.y);   // Update position

    return OBJ;
}

// Goes inside main loop
object object_motion(object OBJ,int speed_x, int speed_y)
{
    OBJ.speed_x=speed_x;
    OBJ.speed_y=speed_y;
    
    OBJ.x+=OBJ.speed_x;    // Move left/right
    OBJ.y+=OBJ.speed_y;    // Move up/down

    OBJ.object->attr2=ATTR2_BUILD(OBJ.tid,OBJ.pb,0);
    obj_set_pos(OBJ.object,OBJ.x,OBJ.y);   // Update position

    return OBJ;
}

// ============ Collision functions ============

collision_box collision_box_set(collision_box CBOX, int size_x, int size_y, int offset_x, int offset_y)
{
    CBOX.size_x=size_x;
    CBOX.size_y=size_y;
    CBOX.offset_x=offset_x;
    CBOX.offset_y=offset_y;

    return CBOX;
}

// Goes inside main loop
object object_edge_bound(object OBJ, int left, int right, int top, int bottom)
{
    if(OBJ.x<left-OBJ.width)
        OBJ=object_position(OBJ,right,OBJ.y);
    else if(OBJ.x>right)
        OBJ=object_position(OBJ,left-OBJ.width,OBJ.y);
    else if(OBJ.y<top-OBJ.height)
        OBJ=object_position(OBJ,OBJ.x,bottom);
    else if(OBJ.y>bottom)
        OBJ=object_position(OBJ,OBJ.x,top-OBJ.height);
    else
        OBJ=object_motion(OBJ,OBJ.speed_x,OBJ.speed_y);

    return OBJ;
}

// Goes inside main loop
object object_edge_collision(object OBJ, int left, int right, int top, int bottom)
{
    if(OBJ.x<=left)
        OBJ=object_motion(OBJ,-OBJ.speed_x,OBJ.speed_y);
    else if(OBJ.x>=right-OBJ.width)
        OBJ=object_motion(OBJ,-OBJ.speed_x,OBJ.speed_y);
    else if(OBJ.y<=top)
        OBJ=object_motion(OBJ,OBJ.speed_x,-OBJ.speed_y);
    else if(OBJ.y>=bottom-OBJ.height)
        OBJ=object_motion(OBJ,OBJ.speed_x,-OBJ.speed_y);
    else
        OBJ=object_motion(OBJ,OBJ.speed_x,OBJ.speed_y);

    return OBJ;
}

// Goes inside main loop
int collision_check_rectangle(object OBJ1, collision_box CBOX1, object OBJ2, collision_box CBOX2)
{
    int collision;
    
    if (OBJ1.x+CBOX1.offset_x<OBJ2.x+CBOX2.offset_x+CBOX2.size_x&&
        OBJ1.x+CBOX1.offset_x+CBOX1.size_x>OBJ2.x+CBOX2.offset_x&&
        OBJ1.y+CBOX1.offset_y<OBJ2.y+CBOX2.offset_y+CBOX2.size_y&&
        OBJ1.y+CBOX1.offset_y+CBOX1.size_y>OBJ2.y+CBOX2.offset_y)
        collision=1;
    else
        collision=0;

    return collision;
}

// ============ Other functions ============

u32 timer_set()
{
    // Overflow every ~1 second
    // 0x4000 ticks @ FREQ_1024

    REG_TM2D=-0x4000;       // 0x400 ticks till overflow
    REG_TM2CNT=TM_FREQ_1024; // We're using the 1024 cycle timer

    // Cascade into tm3
    REG_TM3CNT=TM_ENABLE|TM_CASCADE;

    u32 sec=-1;

    return sec;
}

int timer(u32 sec, int time)
{
    if(REG_TM3D!=sec)
        {
        sec=REG_TM3D;
        time++;
        }

    return time;
}
