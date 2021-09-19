//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int habitantes, codigo, repete = 1, i;
    float maior, menor, media;
    float residencial = 0, comercial = 0, industrial = 0, consumo;

    printf("Informe o numero de habitantes: ");
    scanf("%d", &habitantes);

    for (i = 0; i < habitantes; i++)
    {
        printf("\nInforme o consumo do cidadao %d: ", i + 1);
        scanf("%f", &consumo);

        if (i == 0)
        {
            maior = menor = consumo;
        }
        else
        {
            (consumo > maior) ? maior = consumo : (consumo < menor) ? menor = consumo
                                                                    : 0;
        }

        media += consumo;

        repete = 1;
        while (repete)
        {
            repete = 0;

            printf("\nInforme o codigo do consumidor: \n[1] Residencial\n[2] Comercial\n[3] Industrial\n ");
            scanf("%d", &codigo);

            switch (codigo)
            {
            case 1:
                residencial += consumo;
                break;
            case 2:
                comercial += consumo;
                break;
            case 3:
                industrial += consumo;
                break;

            default:
                printf("\n-=-=-=- Erro -=-=-=-\n");
                repete = 1;
                break;
            }
        }
    }

    printf("\n\n-=-=-=- Dados do Consumo -=-=-=-");
    printf("\nMaior consumo: %.2f", maior);
    printf("\nMenor consumo: %.2f", menor);
    printf("\nMedia de consumo: %.2f", media / habitantes);
    printf("\n\n-=-=-=- Total do Consumo -=-=-=-");
    printf("\nResidencial: %.2f", residencial);
    printf("\nComercial: %.2f", comercial);
    printf("\nIndustrial: %.2f\n\n", industrial);

    return 0;
}
