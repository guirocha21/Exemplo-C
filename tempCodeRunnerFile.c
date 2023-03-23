#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero[32] = {0};
    int i = 0;
    int quadrado_perfeito = 0;

    printf ("Digite um numero inteiro e positivo (0 < J <= 10000):\n");
    scanf ("%d", &numero[i]);

    if (numero[i] > 0 && numero[i] <= 10000) {
        while (numero[i] != 0) {
            i++;

            scanf ("\n%d", &numero[i]);
        }

        for (int j = 0 ; j <= i ; j++) {
            for (int k = 1 ; k <= numero[j] / 2 ; k++) {
                if (numero[j] == k*k) {
                    quadrado_perfeito++;
                }
            }
        }

        printf ("\n%d", quadrado_perfeito);
    }
    else {
        printf ("Digite novamente");
        i--;
    }

    return 0;
}