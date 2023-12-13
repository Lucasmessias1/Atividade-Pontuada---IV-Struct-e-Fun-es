#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 250

struct dados
{
    char nome[200], cargo[200];
    float salario;
};

float media(struct dados funcionario[])
{
    int i, j;
    float soma, resultado;

    for (j = 0; j < TAM; j++)
    {
        if (strcmp(funcionario[i].cargo, "Desenvolvedor") == 0)
        {
            j++;
            soma += funcionario[i].salario;
        }
    }
    resultado = soma / (float)j;
    return resultado;
}

int main()
{

    int opcao, i;
    
    struct dados funcionario[TAM];

    do
    {
        printf("App Empresa\n");
        printf(" 1 - Adicionar informação\n");
        printf(" 2 - Exibir\n");
        printf(" 3 - Sair do programa\n");
        printf("Resposta: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Digite o nome do %dº funcionário: ", i + 1);
            gets(funcionario[i].nome);

            printf("Digite o nome do cargo: ");
            gets(funcionario[i].cargo);

            printf("Digite o valor do salario: ");
            scanf("%f", &funcionario[i].salario);

            system("cls||clear");

            break;
        case 2:
            printf("Média salarial: R$ %.2f\n", media(funcionario));
            break;
        }

    } while (opcao != 3);

    return 0;
}
