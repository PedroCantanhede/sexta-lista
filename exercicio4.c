//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
float raizQuadrada(float numero)
{
    int i = 0;
    float n = numero;

    for (i; i < 30; i++)
    {
        n = n / 2 + numero / (2 * n);
    }

    return (n);
}

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float numero, raiz, quadrado;

    printf("Informe o numero: ");
    scanf("%f", &numero);

    if (numero > 0)
    {
        raiz = sqrt(numero);

        printf("\n A raiz quadrada de %.1f e: %.2f", numero, raiz);
    }
    else
    {
        quadrado = numero * numero;

        printf("\n O numero %.1f ao quadrado e: %.1f", numero, quadrado);
    }

    return 0;
}
