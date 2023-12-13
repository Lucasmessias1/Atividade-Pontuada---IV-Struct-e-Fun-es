#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 3

struct dados_pessoa
{
    char nome[200];
    char telefone[10];
    char email[200];
};

char *validando(struct dados_pessoa contato[], char *chamando)
{
    int i;

    for (i = 0; i < TAM; i++)
    {

        if (strcmp(contato[i].nome, chamando) == 0)
        {
            printf("O número desejado é: %s \n", contato[i].telefone);
            break;
        }
        printf("\nContato não encontrado.");
    }
}

int main()
{
    int i;
    char chamando[200];

    struct dados_pessoa contato[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite seu nome: \n");
        gets(contato[i].nome);

        printf("Digite seu telefone: \n");
        gets(contato[i].telefone);

        printf("Digite seu e-mail: \n");
        gets(contato[i].email);

        printf("\n");
    }

    printf("Busca de contatos.\n");
    printf("Digite um nome para acessar o número de contato: ");
    gets(chamando);

    validando(contato,chamando);

    return 0;
}
