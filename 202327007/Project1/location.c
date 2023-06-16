#include "location.h"
#include <Windows.h>

void GotoPos(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}