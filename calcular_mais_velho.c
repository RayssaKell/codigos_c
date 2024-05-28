#include <stdio.h>
#include <stdlib.h> 


int calcularIdade(int ano_nascimento) {
   
    int ano_atual = 2024; 
    return ano_atual - ano_nascimento;
}

int main() {
    char nome1[40], nome2[40];
    int ano_nascimento1, ano_nascimento2;

    printf("PRIMEIRA PESSOA\n");
    printf("--------------------\n");
    printf("Digite seu nome: \n");
    scanf("%s", &nome1);
    printf("Digite o ano em que voce nasceu: \n");
    scanf("%d", &ano_nascimento1);

    system("cls"); 

    printf("SEGUNDA PESSOA\n");
    printf("--------------------\n");
    printf("Digite seu nome: \n");
    scanf("%s", &nome2);
    printf("Digite o ano em que voce nasceu\n");
    scanf("%d", &ano_nascimento2);

    system("cls"); 

    int idade1 = calcularIdade(ano_nascimento1);
    int idade2 = calcularIdade(ano_nascimento2);

    if (idade1 > idade2) {
        printf("%s é mais velho(a) do que %s.\n", nome1, nome2);
    } else if (idade2 > idade1) {
        printf("%s é mais velho(a) do que %s.\n", nome2, nome1);
    } else {
        printf("%s e %s têm a mesma idade.\n", nome1, nome2);
    }

    return 0;
}
