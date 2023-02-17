#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int cartela[5][5];
    int nlin, ncol;
    
    srand(time(NULL));

    for (nlin=0; nlin<5; nlin++) {
        for (ncol=0; ncol<5; ncol++) {
            cartela[nlin][ncol] = rand()%99;
        }
    }
    for (nlin=0; nlin<5; nlin++) {
        for (ncol=0; ncol<5; ncol++) {
            printf(" %d |", cartela[nlin][ncol]);
        }
        printf ("\n");
    }
    return 0;
}