#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main () {
    int32_t Entrada;
    printf ("Digite um numero inteiro positivo, em Hexadecimal: ");
    scanf("%x", &Entrada);

    //printf ("\nValor Recebido: %d", Entrada);

    char entradaDec [32] = {0};
    char metade1 [32] = {0};
    char metade2 [32] = {0};

    sprintf(entradaDec,"%d",Entrada);

    //printf ("\nValor Recebido: %s", entradaDec);
    
    for (int i = 0; i < strlen(entradaDec) / 2 ; i++) {
        
        metade1[i] = entradaDec[i];
        //printf ("\nMetade 1: %c", metade1[i]);
        
    }
    for (int j = strlen(entradaDec) - 1; j > (strlen(entradaDec) / 2) - 1 ; j--) {
        
        metade2[(strlen(entradaDec) - j ) - 1 ] = entradaDec[j];  //0 == 4 // 1 == 3 // 2 == 2
        /*printf ("\nentradaDec: %c", entradaDec[j]);
        printf ("\nMetade 2 NUM: %d",(strlen(entradaDec) - j ) - 1);
        
        printf ("\nMetade 2: %c", metade2[(strlen(entradaDec) - j ) - 1]);*/
    
    }

    int verificado = 0;
    
    /*printf ("\nTamanho metade1 : %d", strlen(metade1));
    printf ("\nTamanho metade2 : %d", strlen(metade2));*/

    for (int k = 0; k < strlen(metade1) ; k++) {
        /*printf ("\nMetade 1: %c", metade1[k]);
        printf ("\nMetade 2: %c", metade2[k]);*/
        if (metade1[k] == metade2[k]) {
            verificado++;
            //printf("\nVerificado");
        }
    }
    
    if(verificado == strlen(metade1)){
        printf("S");
        
    }
    else{

        printf("N");
    }

    return 0;
}