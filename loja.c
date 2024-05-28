#include <stdio.h>

typedef struct {
    char nome[20];
    float preco;
    float desconto;
} Produto;

int main() {
    
    Produto loja1[2] = {{"Celular", 1850.0, 0.1}, {"Notebook", 3000.0, 0.15}}; 
    Produto loja2[2] = {{"Celular", 1627.0, 0.05}, {"Notebook", 3150.0, 0.2}}; 

    
    float precoTotalComDescontoLoja1 = 0, precoTotalSemDescontoLoja1 = 0;
    float precoTotalComDescontoLoja2 = 0, precoTotalSemDescontoLoja2 = 0;

    printf("Loja 1:\n");
    for (int i = 0; i < 2; ++i) {
        float precoComDesconto = loja1[i].preco * (1 - loja1[i].desconto);
        printf(" - %s (Sem Desconto): R$%.2f\n", loja1[i].nome, loja1[i].preco);
        printf("   %s (Com Desconto): R$%.2f\n", loja1[i].nome, precoComDesconto);
        precoTotalComDescontoLoja1 += precoComDesconto;
        precoTotalSemDescontoLoja1 += loja1[i].preco;
    }
    printf(" - Total (Sem Desconto): R$%.2f\n", precoTotalSemDescontoLoja1);
    printf(" - Total (Com Desconto): R$%.2f\n", precoTotalComDescontoLoja1);

    printf("\nLoja 2:\n");
    for (int i = 0; i < 2; ++i) {
        float precoComDesconto = loja2[i].preco * (1 - loja2[i].desconto);
        printf(" - %s (Sem Desconto): R$%.2f\n", loja2[i].nome, loja2[i].preco);
        printf("   %s (Com Desconto): R$%.2f\n", loja2[i].nome, precoComDesconto);
        precoTotalComDescontoLoja2 += precoComDesconto;
        precoTotalSemDescontoLoja2 += loja2[i].preco;
    }
    printf(" - Total (Sem Desconto): R$%.2f\n", precoTotalSemDescontoLoja2);
    printf(" - Total (Com Desconto): R$%.2f\n", precoTotalComDescontoLoja2);

    
    if (precoTotalComDescontoLoja1 < precoTotalComDescontoLoja2) {
        printf("\nLoja 1 é mais vantajosa.\n");
    } else if (precoTotalComDescontoLoja2 < precoTotalComDescontoLoja1) {
        printf("\nLoja 2 é mais vantajosa.\n");
    } else {
        printf("\nAs duas lojas possuem o mesmo preço total com desconto.\n");
    }

    return 0;
}
