#ifndef AIR_H
#define AIR_H

float vx[YRES/CELL][XRES/CELL], ovx[YRES/CELL][XRES/CELL];
float vy[YRES/CELL][XRES/CELL], ovy[YRES/CELL][XRES/CELL];
float pv[YRES/CELL][XRES/CELL], opv[YRES/CELL][XRES/CELL];

float cb_vx[YRES/CELL][XRES/CELL], ovx[YRES/CELL][XRES/CELL];
float cb_vy[YRES/CELL][XRES/CELL], ovy[YRES/CELL][XRES/CELL];
float cb_pv[YRES/CELL][XRES/CELL], opv[YRES/CELL][XRES/CELL];

float fvx[YRES/CELL][XRES/CELL], fvy[YRES/CELL][XRES/CELL];

#endif