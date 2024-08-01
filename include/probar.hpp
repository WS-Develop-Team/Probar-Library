#ifndef PROBAR_HPP
#define PROBAR_HPP

#include "theme.hpp"
#include "pbfuncs.hpp"
using namespace std;

int tot;
int len;
int farth;
string ch;
int theme;

void pbStart(int lent, int fart, string opt, int thm)
{
	tot = lent;
	farth = fart;
	ch = opt;
	theme = thm;
	cout << "\033[?25l";
    len = depth() - farth * 2 - 2;
    cout << "\033[1;" << farth << "H" << "|";
    cout << "\033[1;" << farth + len + 1 << "H" << " |";
    if (theme == 3 || theme == 4 || theme == 5) {
        cout << "\033[3;" << len / 2 + farth - 5 << "H" << "Loading...";
    }
}

void pbAdd (double p)
{
    switch (theme)
	{
		case 0:
            cout << "\033[1;" << int (1.0 * p / tot * len+ 1 + farth) << "H" << ch;
            cout << "\033[2;" << len / 2 + farth - 4 << "H" << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
            break;
        case 1:
            if (p < len / 2 - 4) cout << "\033[1;" << int (1.0 * p / tot * len+ 1 + farth) << "H" << ch;
            else if (p > len / 2 + 4) cout << "\033[1;" << int (1.0 * p / tot * len+ 1 + farth) << "H" << ch;
            cout << "\033[1;" << len / 2 + farth - 4 << "H" << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
            break;
        case 2:
            if (p <= len - 8) cout << "\033[1;" << int (1.0 * p / tot * len+ 1 + farth) << "H" << ch;
            else cout << "\033[1;" << len - 8 + farth + 2 << "H";
            cout << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
        case 3:
            cout << "\033[1;" << int (1.0 * p / tot * len+ 1 + farth) << "H" << ch;
            cout << "\033[2;" << len / 2 + farth - 4 << "H" << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
            break;
        case 4:
            if (p < len / 2 - 4) cout << "\033[1;" << int (1.0 * p / tot * len+ 1 + farth) << "H" << ch;
            else if (p > len / 2 + 4) cout << "\033[1;" << int (1.0 * p / tot * len+ 1 + farth) << "H" << ch;
            cout << "\033[1;" << len / 2 + farth - 4 << "H" << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
            break;
        case 5:
            if (p <= len - 8) cout << "\033[1;" << int (1.0 * p / tot * len+ 1 + farth) << "H" << ch;
            else cout << "\033[1;" << len - 8 + farth + 2 << "H";
            cout << setw(7) << fixed << setprecision(3) << 1.0 * p / tot * 100 << '%';
	}
}

void pbEnd()
{
	tot = 0;
	farth = 0;
	ch = "\0";
	theme = 0;
	len = 0;
}
#endif // PROBAR_HPP

