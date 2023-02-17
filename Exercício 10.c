#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float identiSal(float sal1, float sal2) {
    if (sal1 > sal2) {
        return sal1;
    }
    else {
        return sal2;
    }
}

int main () {
    float sal1, sal2;
    puts("Digite o primeiro salário: ");
    scanf ("%f", &sal1);
    puts("Digite o segundo salário: ");
    scanf ("%f", &sal2);
    printf("O maior salário é: %.3f", identiSal(sal1, sal2));
    return 0;
}