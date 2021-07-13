#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include"types.h"

extern OBJ_ATTR obj_buffer[128];
extern OBJ_AFFINE *obj_aff_buffer;

object object_init_32(object OBJ, int pos_x, int pos_y, int height, int width, int tid, int pb, int id);
object object_init_64(object OBJ, int pos_x, int pos_y, int height, int width, int tid, int pb, int id);

object object_position(object OBJ,int x, int y);
object object_player_motion(object OBJ, int speed_x, int speed_y);
object object_motion(object OBJ,int speed_x, int speed_y);

collision_box collision_box_set(collision_box CBOX, int size_x, int size_y, int offset_x, int offset_y);
object object_edge_bound(object OBJ, int left, int right, int top, int bottom);
object object_edge_collision(object OBJ, int left, int right, int top, int bottom);

int collision_check_rectangle(object OBJ1, collision_box CBOX1, object OBJ2, collision_box CBOX2);

u32 timer_set();
int timer(u32 sec, int time);

#endif // FUNCTIONS_H