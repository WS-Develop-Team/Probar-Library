#ifndef PROBAR_HPP
#define PROBAR_HPP

#include "theme.hpp"
#include "pbfuncs.hpp"
using namespace std;

int tot;
int farth;
string ch;
int theme;

void pbStart(int lent, int fart, string opt, int thm)
{
	tot = lent;
	farth = fart;
	ch = opt;
	theme = thm;
	hideCursor();
    int len = getWidth() - farth * 2 - 2; // 局部变量
    gotoXY(farth, 1);
    cout << "|";
    gotoXY(farth+len+1, 1);
    cout << " |";
    if (theme == 3 || theme == 4 || theme == 5) {
        gotoXY(len/2+farth-5, 3);
        cout << "Loading...";
    }
}

void pbAdd (double p)
{
    int len = getWidth() - farth * 2 - 2; // 局部变量
    switch (theme)
	{
		case 0:
        case 3:
            gotoXY(int (1.0 * p / tot * len+ 1 + farth), 1);
            cout << ch;
            gotoXY(len / 2 + farth - 4, 2);
            cout << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
            break;
        case 1:
        case 4:
            if (p /tot * len < len / 2 - 4 || p /tot * len > len / 2 + 4)
            {
                gotoXY(int (1.0 * p / tot * len+ 1 + farth), 1);
                cout << ch;
            }
            gotoXY(len / 2 + farth - 4, 1);
            cout << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
            break;
        case 2:
        case 5:
            if (p /tot * len <= len - 8)
            {
                gotoXY(int (1.0 * p / tot * len+ 1 + farth), 1);
                cout << ch;
            }
            else gotoXY(len - 8 + farth + 2, 1);
            cout << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
            break;
	}
}

void pbEnd()
{
    int len = getWidth() - farth * 2 - 2; // 局部变量
    gotoXY(len / 2 + farth - 4, 2);
	cout << setw(7) << fixed << setprecision(3) << 1.0 * 100 << '%';
	tot = 0;
	farth = 0;
	ch = "\0";
	theme = 0;
}
#endif // PROBAR_HPP
