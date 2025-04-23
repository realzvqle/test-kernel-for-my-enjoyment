#include "draw.h"


static volatile UINT32 *s_FrameBufferPointer;
static volatile UINT32 s_FrameBufferPitch;


VOID KiStartFrameBuffer(struct limine_framebuffer* framebuffer){
    s_FrameBufferPointer = framebuffer->address;
    s_FrameBufferPitch = framebuffer->pitch;
}

VOID KiDrawPixel(UINT16 x, UINT16 y, UINT64 color){
    s_FrameBufferPointer[y * (s_FrameBufferPitch / 4) + x] = color;
}

VOID KiDrawRectangle(UINT16 x, UINT16 y, UINT16 width, UINT16 height, UINT64 color){
    for(int i = x; i < (x + width); i++){
        for(int j = y; j < (y + height); j++){
            KiDrawPixel(i, j, color);
        }
    }
}   