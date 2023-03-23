#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Entrada;
    int cont = 0;
    int j_vetor = 0;
    int primo[100000];

    printf ("Digite um numero par (2<=P<=4294967294): ");
    scanf ("%d", &Entrada);

    for (int i = 2 ; i <= Entrada ; i++) {
        for (int j = 1 ; j <= i ; j++) {
            if (i % j == 0) {
                cont++;
            }
        }

        if (cont == 2) {
            primo[j_vetor] = i;
            printf ("\n\n%d numero e primo", primo[j_vetor]);
            j_vetor++;
        }
        else {
            printf ("\n\n%d numero nao e primo", i);
        }

        cont = 0;
    }

    return 0;
}