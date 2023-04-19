#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char Entrada1[32] = {0};
    char Entrada2[32] = {0};
    char Rev_Entrada1[32] = {0};
    char Rev_Entrada2[32] = {0};
    char Str_Soma[32] = {0};
    char Str_Rev_Soma[32] = {0};
    int Numero1 = 0;
    int Numero2 = 0;
    int tamanho_Entrada1 = 0;
    int tamanho_Entrada2 = 0;
    int Rev_Numero1 = 0;
    int Rev_Numero2 = 0;
    int Soma = 0;
    int tamanho_Soma = 0;
    int Rev_Soma = 0;

    printf ("Digite dois numeros inteiros:\n");
    fflush (stdin);
    gets (Entrada1);
    fflush (stdin);
    gets (Entrada2);

    Numero1 = atoi(Entrada1);
    Numero2 = atoi(Entrada2);

    if (Numero1 != 0 && Numero2 != 0) {
        tamanho_Entrada1 = strlen (Entrada1);
        tamanho_Entrada2 = strlen (Entrada2);
        
        for (int i = 0 ; i < tamanho_Entrada1 ; i++) {
            Rev_Entrada1[i] = Entrada1[(tamanho_Entrada1 - 1) - i];
        }

        for (int j = 0 ; j < tamanho_Entrada2 ; j++) {
            Rev_Entrada2[j] = Entrada2[(tamanho_Entrada2 - 1) - j];
        }
        
        Rev_Numero1 = atoi(Rev_Entrada1);
        Rev_Numero2 = atoi(Rev_Entrada2);

        //printf ("\nReverso do Numero 1: %d", Rev_Numero1);

        //printf ("\nReverso do Numero 2: %d", Rev_Numero2);

        Soma = Rev_Numero1 + Rev_Numero2;

        //printf ("\nSoma: %d", Soma);

        itoa(Soma , Str_Soma , 10);

        tamanho_Soma = strlen (Str_Soma);

        //printf ("\nSoma, em string: %s", Str_Soma);

        //printf ("\nTamanho da string Soma: %d", tamanho_Soma);

        for (int k = 0 ; k < tamanho_Soma ; k++) {
            Str_Rev_Soma[k] = Str_Soma[(tamanho_Soma - 1) - k];
        }

        Rev_Soma = atoi(Str_Rev_Soma);

        printf ("\n%d", Rev_Soma);
    }
    else {
        printf ("Digite novamente");
    }

    return 0;
}