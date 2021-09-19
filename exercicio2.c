//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float celsius, fahrenheit;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("\n\n- - - Temperatura - - - \n");

    printf("- Celsius: %.2f \n", celsius);
    printf("- Fahrenheit: %.2f \n", fahrenheit);

    return 0;
}
