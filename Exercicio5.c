#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Entrada;
    int cont1 = 0;
    int cont2 = 0;
    int j_vetor = 0;
    int primo1[100000];
    int menor_primo;
    int diferenca;
    int primo2[100000];
    int maior_primo;
    int l_vetor = 0;

    printf("Digite um numero par (4<=P<=4294967294): ");
    scanf("%d", &Entrada);

    if (Entrada % 2 == 0 && Entrada >= 4 && Entrada <= 4294967294)
    {
        for (int i = 4; i <= Entrada; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    cont1++;
                }
            }

            if (cont1 == 2)
            {
                primo1[j_vetor] = i;
                //printf("\n\n%d numero e primo", primo1[j_vetor]);
                j_vetor++;
            }
            else
            {
                // printf ("\n\n%d numero nao e primo", i);
            }

            cont1 = 0;
        }

        for (int k = j_vetor - 1; k >= 0; k--)
        {
            diferenca = Entrada - primo1[k];

            for (int m = 1; m <= diferenca; m++)
            {
                if (diferenca % m == 0)
                {
                    cont2++;
                }
            }

            if (cont2 == 2)
            {
                primo2[l_vetor] = diferenca;
                //printf("\n%d numero e primo\n\n", primo2[l_vetor]);
                l_vetor++;
            }
            else
            {
                // printf ("\n\n%d numero nao e primo", i);
            }

            cont2 = 0;
        }

        l_vetor = 0;

        maior_primo = primo2[l_vetor];
        menor_primo = Entrada - maior_primo;

        printf ("%d\n", menor_primo);
        printf ("%d\n", maior_primo);
    }
    return 0;
}