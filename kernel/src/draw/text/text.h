#ifndef TEXT_H_INCLUDED
#define TEXT_H_INCLUDED







#include "../../kernel.h"



VOID KiDrawCharacter(CHAR c, UINT16 x, UINT16 y, UINT16 size, UINT64 color);
VOID KiDrawString(PCHAR string, UINT16 x, UINT16 y, UINT16 size, UINT64 color);
VOID KiTestFont();
#endif