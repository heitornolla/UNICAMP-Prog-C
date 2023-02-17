#include <stdio.h>

int main () {
    float conjunto1[10], conjunto2[10];
    for (int i=0; i<10; i++) {
        scanf ("%f", &conjunto1[i]);
    }
    for (int i=0; i<10; i++) {
        conjunto2[i] = conjunto1[i]*conjunto1[i];
    }
    for (int i=0; i<10; i++) {
        printf (" %.0f |", conjunto1[i]);
    }
    
    printf ("\n\n");
    
    for (int i=0; i<10; i++) {
        printf (" %.0f |", conjunto2[i]);
    }
    return 0;
}