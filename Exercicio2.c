#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint32_t N;
    int numero;
    int i;
    float soma = 0;
    float media_aritmetica = 0;

    printf ("Digite um numero inteiro N (1<N<1000): ");
    scanf ("%d", &N);
    
    if (N < 1000 && N > 1) {
        for (i = 1 ; i <= N ; i++) {
            printf ("\nDigite um numero entre -1000 e 1000 (%d): ", i);
            scanf ("%d", &numero);

            if (numero >= -1000 && numero <= 1000) {
                if (soma + numero < INT32_MAX) {
                    soma = soma + numero;
                }
            }
        }

        if (N != 0) {
            media_aritmetica = soma / N;

            printf ("\nMedia Aritmetica = %.1f", media_aritmetica);
        }
    }
    else {
        printf ("Digite novamente");
    }

    return 0;
}