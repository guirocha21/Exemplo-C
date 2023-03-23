#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero_de_cartoes = 0;
    int numero_do_cartao[32] = {0};
    int numero_de_homem = 0;
    int numero_de_mulher = 0;

    printf ("Digite o numero de cartoes, que foram distribuidos (1 <= N <= 1000): ");
    scanf ("%d", &numero_de_cartoes);
    printf ("\n");

    if (numero_de_cartoes >= 1 && numero_de_cartoes <= 1000) {
        printf ("Digite o numero de cada cartao (1 <= N <= 500):\n");
        
        for (int i = 0 ; i < numero_de_cartoes ; i++) {
            scanf ("%d", &numero_do_cartao[i]);
        }

        for (int i = 0 ; i < numero_de_cartoes ; i++) {
            if (numero_do_cartao[i] % 2 == 0) {
                numero_de_mulher++;
            }
            else {
                numero_de_homem++;
            }
        }
        
        //printf ("\nHomens: %d", numero_de_homem);
        //printf ("\nMulher: %d", numero_de_mulher);

        if (numero_de_mulher == numero_de_homem) {
            printf ("S");
        }
        else {
            printf ("N");
        }
    }

    return 0;
}