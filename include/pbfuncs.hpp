#ifndef PROBARFUNCTIONS_H
#define PROBARFUNCTIONS_H

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int depth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    return columns;
}

int bit(int k) {
    int ans = 0;
    while (k) {
        k /= 10;
        ans++;
    }
    return ans;
}

#endif // PROBARFUNCTIONS_H

