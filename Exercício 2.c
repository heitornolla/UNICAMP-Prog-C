#include <stdio.h>

int main () {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;
    
    soma = A[0] + A[1] + A[5];
    
    printf ("O valor da soma das posições 0, 1 e 5 é %d\n", soma);
    
    for (int i=0; i<6; i++) {
        printf ("O valor na posição %d é %d\n", i, A[i]);
    }
    return 0;
}