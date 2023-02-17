#include <stdio.h>

int main () {
    int a, b;
    printf("Insira o primeiro numero: \n");
    scanf("%d", &a);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &b);

    if(&a > &b){
        printf("A variável *a* tem o maior endereco de memoria, sendo este %p\n", &a);
    }
    
    else {
        printf("A variável *b* tem o maior endereco de memoria, sendo este %p\n", &b);
    }
    
    return 0;
}