#include <stdio.h>
#include <stdlib.h> 

int main (){
    
    int numero;


printf("Insira um numero: \n");
scanf("%d", &numero);


      (numero % 2 == 0) ? printf("O numero %d é par.\n", numero) : printf("O numero %d é ímpar.\n", numero);

    return 0;
}
