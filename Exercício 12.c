#include <stdio.h>

int main() {
    int num = 10;
    int *pontnum = &num;
    
    float real = 4.5;
    float *pontreal = &real;
    
    char c ='v';
    char *pontchar = &c;
    
    printf ("Valor das variáves antes das mudanças: %d, %.1f, %c\n", num, real, c);
    
   *pontnum = 0;
   *pontreal = 45.5;
   *pontchar = 'a';

    printf ("Valor das variáves antes das mudanças: %d, %.1f, %c\n", num, real, c);

    return 0;
}