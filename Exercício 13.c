#include <stdio.h>

int main () {
    
    int n1 = 90;
    int n2 = 45;
    
    int *pn1 = &n1;
    int *pn2 = &n2;
    
    if (&n1 > &n2) {
        printf ("A variavel n1 tem o maior endereco de memoria, sendo este %p\n", &n1);
    }
    
    else {
        printf ("A variavel n2 tem o maior endereco de memoria, sendo este %p\n", &n2);
    }
    
    return 0;
}