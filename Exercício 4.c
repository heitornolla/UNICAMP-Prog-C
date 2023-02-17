#include <stdio.h>

int main () {
    int vetor[10];
    for (int i=0; i<10; i++) {
        scanf ("%d", &vetor[i]);
    }
    int i, j, temp;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
    printf ("O menor elemento é %d e o maior é %d\n", vetor[0], vetor[9]);
    return 0;
}