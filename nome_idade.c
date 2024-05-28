 #include <stdio.h>

int main (){

char nome [30];
int idade;

     printf("Qual o seu nome:\n");
     scanf("%s", &nome); 

      printf("Qual a sua idade:\n");
     scanf("%d", &idade); 
     printf("Seu nome é %s e sua idade é %d", nome, idade);

     return 0;
}