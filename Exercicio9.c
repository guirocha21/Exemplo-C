#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero = 0;
    int i = 0;
    int sucessor[32] = {0};

    printf ("Digite um numero inteiro (-4000 <= I <= 4000), e 0 para parar de rodar o programa:\n");
    scanf ("%d", &numero);

    while (numero != 0) {
        if (numero >= -4000 && numero <= 4000) {
            //printf ("i = %d\n\n", i);
            
            sucessor[i] = numero + 1;

            //printf ("Sucessor = %d\n\n", sucessor[i]);

            i++;
            
            scanf ("%d", &numero);
        }
        else {
            printf ("Digite novamente");
            i--;
        }
    }

    for (int j = 0 ; j < i ; j++) {
        printf ("\n%d", sucessor[j]);
    }
    
    return 0;
}