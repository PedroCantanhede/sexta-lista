//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int cont = 1;
    int tamanho, i = 0;
    char nome[30];

    printf("Informe o nome: ");
    scanf("%s", &nome);

    tamanho = strlen(nome);

    printf("\n\n-=-=-=- Posicao | Letras -=-=-=- \n");
    for (i; i < tamanho; i++)
    {
        printf("[%d] = %c\n", i, nome[i]);
    }

    printf("\n-=-=-=- Posicao Impar | Letras -=-=-=- \n");
    while (cont <= tamanho - 1)
    {
        printf("|%d| = %c\n", cont, nome[cont]);
        cont = cont + 2;
    }

    printf("\n\n");

    return 0;
}
