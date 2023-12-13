#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


struct dados_produto
{
    char nome[200];
    float preco;
    int estoque;
};

void atualizarEstoque(int estoque, float preco, int quantidadeProduto)
{
    int estoqueAtualizado;
    float precoAtualizado;
    estoqueAtualizado = estoque - quantidadeProduto;
    precoAtualizado =  preco * estoqueAtualizado;
    printf("Estoque atual: %d \n",estoqueAtualizado);
    printf("Preço total em estoque: %.1f \n\n",precoAtualizado);
}

int main() {
	setlocale(LC_ALL,"portuguese");
	
    int opcao, escolha, quantidadeProduto;
    float produtoValor;
    char produtoNome[200];

    struct dados_produto produto;

    printf("Deseja registrar seu novo produto?\n");
    printf("1 - Sim.\n");
    printf("2 - Não.\n");
    scanf("%i", &escolha);

    system("cls||clear");

    switch (escolha)
    {
    case 1:

        fflush(stdin);
        printf("Registre o seu produto.\n");
        printf("Nome: ");
        gets(produto.nome);

        printf("Preço: ");
        scanf("%f", &produto.preco);

        fflush(stdin);

        printf("Quantidade em estoque: ");
        scanf("%i", &produto.estoque);

        printf("Registro finalizado!");

        system("cls||clear");

        break;

    default:
        break;
    }

    do
    {
        printf("Lojinha\n");
        printf("1 - Realizar uma compra\n");
        printf("2 - Consultar estoque\n");
        printf("3 - Sair do programa.\n");
        printf("Resposta: ");
        scanf("%i", &opcao);

        system("cls||clear");

        fflush(stdin);

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Nome do produto: \n");
            gets(produtoNome);

            printf("Digite o valor do produto: ");
            scanf("%f", &produtoValor);

            printf("Quantidade desejada do produto: ");
            scanf("%d", &quantidadeProduto);

            if (quantidadeProduto <= produto.estoque)
            {
                printf("Compra realizada com sucesso!\n");
            }
            else
            {
                printf("Sem estoque suficiente.\n");
            }

            break;

        case 2:

            printf("Produto em estoque.");
            printf("\n");
            printf("Nome: %s \n", produto.nome);
            atualizarEstoque(produto.estoque, produto.preco, quantidadeProduto);

            break;

        default:
            break;
        }

    } while (opcao != 3);

    return 0;
}
