//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int h, i = 0, j = 0;
    int num[10], impar[10];

    printf("Informe 10 numeros inteiros no intervalo de 0 a 50: \n");

    for (h = 1; h < 10; h++)
    {

        scanf(" %d ", &num[h]);

        if (num[h] % 2 == 0)
            ;
        else
        {
            impar[j++] = num[h];
        }
    }

    printf("\nNumeros digitados: ");

    for (h = 0; h < 10; h++)
    {
        printf(" %d ", num[h]);
    }

    printf("\nNumeros impares digitados: ");

    for (i = 1; i < j; i++)
    {
        printf(" %d ", impar[i]);
    }

    return 0;
}
