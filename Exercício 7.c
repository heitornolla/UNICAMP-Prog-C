#include <stdio.h>

int main () {
    int matriz[3][3]; 
    int nlin, ncol, soma1=0, soma2=0;
    
    for (nlin=0; nlin<3; nlin++) {
        for (ncol=0; ncol<3; ncol++) {
            scanf("%d", &matriz[nlin][ncol]);
        }
    }
    
    soma1=matriz[1][2]+matriz[1][3]+matriz[2][3];
    printf("%d\n", soma1);
    
    soma2=matriz[2][1]+matriz[3][1]+matriz[3][2];
    printf("%d\n", soma2);
    
    return 0;
}