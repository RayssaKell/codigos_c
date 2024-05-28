#include <stdio.h> 
#include <locale.h>
#include <unistd.h>

void main () {
    setlocale(LC_ALL,"Portuguese");

int idade1, idade2, idade3;
float nota1,nota2,nota3;
char nome1[40], nome2[40], nome3 [40];
float peso1, peso2, peso3;



printf("CADASTRO DA PRIMEIRA PESSOA");
printf("\n");
printf("___________________________");
printf("\n");
 printf("Qual o seu nome:\n");
     scanf("%s", &nome1); 

      printf("Qual a sua idade:\n");
     scanf("%d", &idade1); 

     printf("Qual seu peso:\n");
     scanf("%f", &peso1);

     printf("Qual a sua nota:\n");
     scanf("%f", &nota1); 

      system("cls");
    
printf("CADASTRO DA SEGUNDA PESSOA");
printf("\n");
printf("________________");
printf("\n");
 printf("Qual o seu nome:\n");
     scanf("%s", &nome2); 

      printf("Qual a sua idade:\n");
     scanf("%d", &idade2); 

     printf("Qual seu peso:\n");
     scanf("%f", &peso2);

     printf("Qual a sua nota:\n");
     scanf("%f", &nota2); 

      system("cls");

    

printf("CADASTRO DA TERCEIRA PESSOA");
printf("\n");
printf("________________");
printf("\n");
 printf("Qual o seu nome:\n");
     scanf("%s", &nome3); 

      printf("Qual a sua idade:\n");
     scanf("%d", &idade3); 

     printf("Qual seu peso:\n");
     scanf("%f", &peso3);

     printf("Qual a sua nota:\n");
     scanf("%f", &nota3); 

       system("cls");

       printf("\nTabela\n");
printf("--------------------------------------\n");
printf("| Nome  | Idade | Peso    |Nota  |\n");
printf("--------------------------------------\n");
printf("| %-15s | %d    | %.2f    | %.1f |\n", nome1, idade1, peso1, nota1);

printf("| %-15s | %d    | %.2f    | %.1f |\n", nome2, idade2, peso2, nota2);

printf("| %-15s | %d    | %.2f    | %.1f |\n", nome3, idade3, peso3, nota3);
printf("\n---------------------------------------\n");

}