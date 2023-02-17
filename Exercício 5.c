#include <stdio.h>

int main () {
    int matriz [4][4];
    int nlin, ncol;
    for (nlin=0; nlin<4; nlin++) {
        for (ncol=0; ncol<4; ncol++) {
            scanf ("%d", &matriz[nlin][ncol]);
        }
    }
    for (nlin=0; nlin<4; nlin++) {
        for (ncol=0; ncol<4; ncol++) {
            if (matriz[nlin][ncol] > 10) {
                printf (" %d |", matriz[nlin][ncol]);
            }
        }
    }
    return 0;
}