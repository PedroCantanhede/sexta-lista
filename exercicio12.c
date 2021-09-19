//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Ponteiro - aponta a localização do registro existente
    FILE *arq;

    // Declaração das Variáveis
    char arquivo[50], conteudo[200];
    int linhas = 0, finalizador = 1;

    while (finalizador)
    {
        printf("Informe o nome do arquivo: ");
        scanf("%s", &arquivo);

        arq = fopen(arquivo, "r");

        if (arq == NULL)
        {
            printf("\nErro na abertura do arquivo\n");
            printf("\nDeseja tentar novamente? [1] Sim | [0] Nao: ");
            scanf("%d", &finalizador);

            fclose(arq);
            getchar();
            printf("\n");
        }
        else
        {
            while (fgets(conteudo, 200, arq))
            {
                linhas++;
            }
            finalizador = 0;
        }
    }

    printf("\n-=-=-=- Leitura do Arquivo -=-=-=-");

    if (linhas == 0)
    {
        printf("\n - Arquivo nao encontrado ou sem conteudo");
    }
    else
    {
        printf("\n - Linhas do Arquivo: %d", linhas);
    }

    fclose(arq);

    printf("\n\n");

    return 0;
}
