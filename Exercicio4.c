#include<stdio.h>
#include<stdlib.h>

int main() {
    int Entrada;
    int Numero[50] = {0};

    printf ("Digite um numero inteiro (1<=N<=40): ");
    scanf ("%d", &Entrada);

    Numero[0] = 0;
    Numero[1] = 1;

    if (Entrada >= 1) {
        printf ("\n%d", Numero[0]);
    }

    if (Entrada >= 2) {
        printf ("\n%d", Numero[1]);
    }

    if (Entrada >= 3 && Entrada <= 40) {
        for (int i = 2 ; i < Entrada ; i++) {
            Numero[i] = Numero[i] + Numero[i-1] + Numero[i-2];
            printf ("\n%d", Numero[i]);
        }
    }

    return 0;
}