//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float numero, quadrado;

    printf("Informe o numero: ");
    scanf("%f", &numero);

    quadrado = numero * numero;

    printf("\n\n- - - Resultado - - - \n");

    printf("- O quadrado do numero %.2f eh: %.2f \n", numero, quadrado);

    return 0;
}
