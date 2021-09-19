//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float numero1, numero2;

    printf("Informe o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%f", &numero2);

    if (numero1 > numero2)
    {
        printf("\n O numero %.2f e maior que %.2f", numero1, numero2);
    }
    else
    {
        printf("\n O numero %.2f e maior que %.2f", numero2, numero1);
    }

    return 0;
}
