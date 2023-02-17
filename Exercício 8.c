#include <stdio.h>
#include <math.h>

int modulo(int num) {
    return fabs(num);
}

int main () {
    int num;
    puts("Digite o número cujo módulo será calculado: ");
    scanf ("%d", &num);
    num = modulo(num);
    printf ("O módulo é: %d\n", num);
    return 0;
}