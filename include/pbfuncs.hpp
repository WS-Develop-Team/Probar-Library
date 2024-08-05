#ifndef PROBARFUNCTIONS_H
#define PROBARFUNCTIONS_H

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void hideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void gotoXY(int x, int y)
{
	HANDLE hout;
	COORD pos;
	pos.X = x;
	pos.Y = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, pos);
}


int getWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    return columns;
}

int getDigits(int k) {
    int ans = 0;
    while (k) {
        k /= 10;
        ans++;
    }
    return ans;
}

#endif // PROBARFUNCTIONS_H

