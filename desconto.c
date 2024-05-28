#include <stdio.h>
#include <stdlib.h> 

int main () {

    char produto[50];
    float valor_do_produto, desconto, valor_com_desconto;

    printf("Insira o nome do produto: \n");
    scanf("%s", produto); 

    printf("Insira o valor do produto: \n");
    scanf("%f", &valor_do_produto);

    printf("Aplique a porcentagem de desconto: \n");
    scanf("%f", &desconto);

    float descontoDecimal = desconto / 100.0;

    valor_com_desconto = valor_do_produto * (1.0 - descontoDecimal);

    system("cls");

    printf("O valor da compra com o desconto ficou de %.2f\n", valor_com_desconto); 

    return 0;
}
