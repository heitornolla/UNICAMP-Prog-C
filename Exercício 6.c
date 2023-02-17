#include <stdio.h>

int main () {
    int matriz[4][4];
    int nlin, ncol;
    for (nlin=1; nlin<5; nlin++) {
        for (ncol=1; ncol<5; ncol++) {
            matriz[nlin-1][ncol-1] = nlin*ncol;
        }
    }
    for (nlin=0; nlin<4; nlin++) {
        for (ncol=0; ncol<4; ncol++) {
                printf (" %d |", matriz[nlin][ncol]);
            }
        }
    return 0;
}