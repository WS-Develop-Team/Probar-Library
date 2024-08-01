#ifndef SIMUPROBAR_HPP
#define SIMUPROBAR_HPP
#include "theme.hpp"
#include "pbfuncs.hpp"
using namespace std;
void simu_probar(string opt, int stmsec, int fart, int thm) {
    cout << "\033[?25l";
    int len = depth() - fart * 2 - 2;
    cout << "\033[1;" << fart + 1 << "H" << "|";
    cout << "\033[1;" << fart + len + 1 << "H" << " |";
    if (thm == 3 || thm == 4 || thm == 5) {
        cout << "\033[3;" << len / 2 + fart - 5 << "H" << "Loading...";
    }
    switch (thm) {
        case 0:
            for (int i = 1; i <= len; i++) {
                Sleep(stmsec);
                cout << "\033[1;" << fart + 1 + i << "H" << opt;
                cout << "\033[2;" << len / 2 + fart - 4 << "H" << setw(7) << fixed << setprecision(3) << 1.0 * i / len * 100 << '%';
            }
            break;
        case 1:
            for (int i = 1; i <= len; i++) {
                Sleep(stmsec);
                if (i < len / 2 - 4) cout << "\033[1;" << fart + 1 + i << "H" << opt;
                else if (i > len / 2 + 4) cout << "\033[1;" << fart + 1 + i << "H" << opt;
                cout << "\033[1;" << len / 2 + fart - 4 << "H" << setw(7) << fixed << setprecision(3) << 1.0 * i / len * 100 << '%';
            }
            break;
        case 2:
            for (int i = 1; i <= len; i++) {
                Sleep(stmsec);
                if (i <= len - 8) cout << "\033[1;" << fart + 1 + i << "H" << opt;
                else cout << "\033[1;" << len - 8 + fart + 2 << "H";
                cout << setw(7) << fixed << setprecision(3) << 1.0 * i / len * 100 << '%';
            }
            break;
        case 3:
            for (int i = 1; i <= len; i++) {
                Sleep(stmsec);
                cout << "\033[1;" << fart + 1 + i << "H" << opt;
                cout << "\033[2;" << len / 2 + fart - 4 << "H" << setw(7) << fixed << setprecision(3) << 1.0 * i / len * 100 << '%';
            }
            break;
        case 4:
            for (int i = 1; i <= len; i++) {
                Sleep(stmsec);
                if (i < len / 2 - 4) cout << "\033[1;" << fart + 1 + i << "H" << opt;
                else if (i > len / 2 + 4) cout << "\033[1;" << fart + 1 + i << "H" << opt;
                cout << "\033[1;" << len / 2 + fart - 4 << "H" << setw(7) << fixed << setprecision(3) << 1.0 * i / len * 100 << '%';
            }
            break;
        case 5:
            for (int i = 1; i <= len; i++) {
                Sleep(stmsec);
                if (i <= len - 8) cout << "\033[1;" << fart + 1 + i << "H" << opt;
                else cout << "\033[1;" << len - 8 + fart + 2 << "H";
                cout << setw(7) << fixed << setprecision(3) << 1.0 * i / len * 100 << '%';
            }
            break;
    }
    return;
}
#endif // SIMUPROBAR_HPP

