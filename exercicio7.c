//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int vet[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nInforme o valor do elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    int maior = vet[0];
    int posicaoMaior = 0;

    printf("\n\n-=-=-=-=-=-=-=-=- Vetor -=-=-=-=-=-=-=-=-");
    printf("\n %d ", vet[0]);

    for (i = 1; i < 10; i++)
    {
        printf("- %d ", vet[i]);
        if (vet[i] > maior)
        {
            maior = vet[i];
            posicaoMaior = i;
        }
    }

    printf("\n\n-=-=-=- Dados do Elemento -=-=-=-");
    printf("\nMaior: %d | Posicao: %d | Indice: %d", maior, posicaoMaior + 1, posicaoMaior);

    return 0;
}
