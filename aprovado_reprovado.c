#include <stdio.h>
#include <stdlib.h> 

int main () {
    char aluno1[50], aluno2[50];
    float nota1, nota2, nota3, nota4; 
    float med1, med2;
    int alunos_aprovados = 0;

    printf("PRIMEIRO ALUNO(A): \n");
    printf("------------------ \n");

    printf("Digite seu nome: \n");
    scanf("%s", aluno1);
    printf("Digite sua nota do primeiro bimestre: \n");
    scanf("%f", &nota1);
    printf("Digite sua nota do segundo bimestre: \n");
    scanf("%f", &nota2);
    med1 = (nota1 + nota2) / 2;
    printf("A média de %s é %.2f\n", aluno1, med1);

    if (med1 >= 7) {
        printf("%s está Aprovado\n", aluno1);
        alunos_aprovados++;
    } else {
        printf("%s está Reprovado\n", aluno1);
    }

    sleep(2);
    system("cls");

    printf("SEGUNDO ALUNO(A): \n");
    printf("------------------ \n");

    printf("Digite seu nome: \n");
    scanf("%s", aluno2);
    printf("Digite sua nota do primeiro bimestre: \n");
    scanf("%f", &nota3);
    printf("Digite sua nota do segundo bimestre: \n");
    scanf("%f", &nota4);
    med2 = (nota3 + nota4) / 2;
    printf("A média de %s é %.2f\n", aluno2, med2);

    if (med2 >= 7) {
        printf("%s está Aprovado\n", aluno2);
        alunos_aprovados++;
    } else {
        printf("%s está Reprovado\n", aluno2);
    }

    sleep(2);
    system("cls");

    printf("Alunos Aprovados:\n");
    if (med1 >= 7) {
        printf("%s (Média: %.2f)\n", aluno1, med1);
    }
    if (med2 >= 7) {
        printf("%s (Média: %.2f)\n", aluno2, med2);
    }

    printf("\nAlunos Reprovados:\n");
    if (med1 < 7) {
        printf("%s (Média: %.2f)\n", aluno1, med1);
    }
    if (med2 < 7) {
        printf("%s (Média: %.2f)\n", aluno2, med2);
    }

    return 0;
}
