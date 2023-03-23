#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int tamanho = 0;
    int numero = 0;
    int parte1 = 0;
    int parte2 = 0;
    int soma = 0;
    char Entrada[32] = {0};
    char str_parte1[32] = {0};
    char str_parte2[32] = {0};

    printf ("Digite um numero (1 <= N <= 100.000.000): ");
    fflush(stdin);
    gets(Entrada);

    numero = atoi(Entrada);

    if (numero >= 1 && numero <= 100000000) {
        tamanho = strlen(Entrada);

        if (tamanho % 2 == 0) {
            for (int i = 0 ; i < tamanho / 2 ; i++) {
                str_parte1[i] = Entrada[i];
            }

            for (int i = tamanho / 2 ; i < tamanho ; i++) {
                str_parte2[i - tamanho / 2] = Entrada[i];
            }

            parte1 = atoi(str_parte1);
            parte2 = atoi(str_parte2);

            soma = parte1 + parte2;

            if (soma*soma == numero) {
                printf ("1");
            }
            else {
                printf ("0");
            }
        }
        else {
            for (int i = 0 ; i < tamanho / 2 ; i++) {
                str_parte1[i] = Entrada[i];
            }

            for (int i = tamanho / 2 ; i < tamanho ; i++) {
                str_parte2[i - tamanho / 2] = Entrada[i];
            }

            parte1 = atoi(str_parte1);
            parte2 = atoi(str_parte2);

            soma = parte1 + parte2;

            if (soma*soma == numero) {
                printf ("1");
            }
            else {
                printf ("0");
            }
        }
    }
    else {
        printf ("Digite o numero novamente");
    }

    return 0;
}