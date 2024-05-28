#include <stdio.h>
#include <locale.h>
#include <unistd.h>

int main() {
    float nota1, nota2, nota3; 
    float med1, med2, med3;
    char nome1[50], nome2[50], nome3[50];
    int alunos_aprovados = 0;

    printf("PRIMEIRO ALUNO(A)\n");
    printf("___________________________\n");
    printf("Insira seu nome:\n");
    scanf("%s", nome1);
    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);
     med1 = (nota1 + nota2 + nota3) / 3;
    printf("Sua média é %f\n", med1);

    if (med1 >= 7) {
        printf("%s está Aprovado\n", nome1);
        alunos_aprovados++;
    } else {
        printf("%s está Reprovado\n", nome1);
    }

    sleep(2);
    system("cls");

    printf("SEGUNDO ALUNO(A)\n");
    printf("___________________________\n");
    printf("Insira seu nome:\n");
    scanf("%s", nome2);
    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);
    med2 = (nota1 + nota2 + nota3) / 3;
    printf("Sua média é %f\n", med2);

    if (med2 >= 7) {
        printf("%s está Aprovado\n", nome2);
        alunos_aprovados++;
    } else {
        printf("%s está Reprovado\n", nome2);
    }

    sleep(2);
    system("cls");

    printf("TERCEIRO ALUNO(A)\n");
    printf("___________________________\n");
    printf("Insira seu nome:\n");
    scanf("%s", nome3);
    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);
    med3 = (nota1 + nota2 + nota3) / 3;
    printf("Sua média é %f\n", med3);

    if (med3 >= 7) {
        printf("%s está Aprovado\n", nome3);
        alunos_aprovados++;
    } else {
        printf("%s está Reprovado\n", nome3);
    }

    sleep(2);
    system("cls");

    printf("\n\n");

    printf("Alunos Aprovados:\n");
    if (med1 >= 7) {
        printf("%s\n", nome1);
    }
    if (med2 >= 7) {
        printf("%s\n", nome2);
    }
    if (med3 >= 7) {
        printf("%s\n", nome3);
    }

    printf("\nAlunos Reprovados:\n");
    if (med1 < 7) {
        printf("%s\n", nome1);
    }
    if (med2 < 7) {
        printf("%s\n", nome2);
    }
    if (med3 < 7) {
        printf("%s\n", nome3);
    }

    return 0;
}