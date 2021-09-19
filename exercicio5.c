//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int numeros, i = 0, maior, menor;

    printf("Informe o numero desejado (Finalize com um numero negativo): ");
    scanf("%d", &numeros);

    maior = numeros;
    menor = numeros;

    while (numeros >= 0)
    {

        if (numeros > maior)
        {
            maior = numeros;
        }
        if (numeros < menor)
        {
            menor = numeros;
        }

        printf("Informe o numero desejado (Finalize com um numero negativo): ");
        scanf("%d", &numeros);

        i++;
    }

    printf("\n-=-=-=- Dados -=-=-=-");
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);

    return 0;
}
