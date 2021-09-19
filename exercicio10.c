//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char sexo, nome[200];
    int idade;

    printf("Informe o nome: ");
    gets(nome);

    printf("Informe a idade: ");
    scanf("%d", &idade);

    printf("Informe o sexo sendo, [M] Masculino [F] Feminino: ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        if (idade > 0 && idade < 11)
        {
            printf("\nMenino: %s", nome);
        }
        else if (idade >= 11 && idade < 20)
        {
            printf("\nRapaz: %s", nome);
        }
        else
        {
            printf("\nAdulto: %s", nome);
        }
    }
    if (sexo == 'F' || sexo == 'f')
    {
        if (idade > 0 && idade < 11)
        {
            printf("\nMenina: %s", nome);
        }
        else if (idade >= 11 && idade < 20)
        {
            printf("\nMoca: %s", nome);
        }
        else
        {
            printf("\nAdulta: %s", nome);
        }
    }

    printf("\n\n");

    return 0;
}
