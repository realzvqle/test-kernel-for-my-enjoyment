#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED








#include "../kernel.h"



VOID KiStartFrameBuffer(struct limine_framebuffer* framebuffer);
VOID KiDrawPixel(UINT16 x, UINT16 y, UINT64 color);
VOID KiDrawRectangle(UINT16 x, UINT16 y, UINT16 width, UINT16 height, UINT64 color);

#endif