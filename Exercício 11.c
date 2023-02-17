#include <stdio.h>

int main () {
    float notas[4], notaFinal;
    char comando;
    puts("Digite as notas do aluno: ");
    for(int i=0; i<4; i++) {
        scanf("%f", &notas[i]);
    }
    puts("Pressione A para média aritmética ou B para média ponderada.");
    scanf ("%c", &comando);
    if (comando == 'A') {
        notaFinal=(notas[0]+notas[1]+notas[2]+notas[3])/4;
        printf("A nota final foi: %.2f\n", notaFinal);
    if (comando == 'B') {
        notaFinal=(notas[0]*5+notas[1]*3+notas[2]*2+notas[3]*1)/11;
        printf("A nota final foi: %.2f\n", notaFinal);
    }
        else {
            printf ("Comando inválido");
            return 0;
        }
    }
}
