#ifndef TYPES_H
#define TYPES_H

#include</opt/devkitpro/libtonc/include/tonc.h>

// === Objects ===
typedef struct
{
    OBJ_ATTR *object;
    int x, y;
    int height, width;
    int speed_x, speed_y;
    u32 tid, pb;    // tile id, pal-bank

} object;

typedef struct
{
    int size_x, size_y;
    int offset_x, offset_y;

} collision_box;

#endif // TYPES_H