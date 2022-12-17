#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int c=0;
    char a[10][20], b[20];

    for (int x=0; x<10; x++) {
        for (int y=0; y<20; y++) {
            b[y] = ' ';
            a[x][y] = ' ';
        }
    }


    for (int i=0; i<10; i++) {
        cin >> a[i];
    }

    cin >> b;

    if(funzione(a,b,c)) {
        cout << c;
    } else {
        cout << "non presente";
    }

    return 0;
}
