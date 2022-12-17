#include "lib.h"

bool funzione (char a[10][20], char b[], int &c) {

    for (int x=0; x<10; x++) {
        for (int y=0; y<20; y++) {
            if (a[x][y] != b[y]) {
                y = 20;
            } else if (y==19) {
                c = x;
                return true;
            }
        }
    }

    return false;
}
