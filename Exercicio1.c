#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint32_t N;
    int numero;
    int soma_decimal = 0;
    int soma_hexadecimal = 0;
    int soma_octal = 0;
    
    printf ("Digite um número N inteiro (1<N<1000): ");
    scanf ("%d", &N);
    
    if (N < 1000 && N > -1000 && N != 1) {
        printf ("Número (%d): ", N);
        
        for (int i = 1 ; i <= N ; i++) {
            printf ("Digite um número qualquer (%d): ", i);
            scanf ("%d", &numero);
        
            if (soma_decimal + numero < INT32_MAX) {
                soma_decimal = soma_decimal + numero;
                
                if (numero % 2 == 0) {
                    soma_hexadecimal = soma_hexadecimal + numero;
                }
                
                if (numero % 2 != 0) {
                    soma_octal = soma_octal + numero;
                } 
            }
        }

        printf ("\nSoma em Decimal dos Números digitados = %d\n", soma_decimal);
        
        printf ("Soma em Hexadecimal dos Números digitados = 0x%x\n", soma_hexadecimal);
    
        printf ("Soma em Octal dos Números digitados = %o\n", soma_octal);
    }
    else {
        printf ("Numero igual a %d ",N);    
    }
    
    return 0;
}