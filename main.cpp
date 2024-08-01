#include "simuprobar.hpp"
#include "probar.hpp"
using namespace std;
int a[10000];
int main() {
	pbStart(10000,8,"¨€",LFLD);
    for(int i=0;i<10000;i++)
    {
    	a[i]=0;
    	pbAdd(i);
	}
	pbEnd();
	//A progress bar for initialize an int[10000]
	return 0;
}

