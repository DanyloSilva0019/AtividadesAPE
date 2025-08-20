#include <stdio.h>

int main() {
    char nome[50];
    char turma[20];
    char disciplina[50];
    int matricula;
    float altura, massa;

    
    printf("algoritmo e programação estruturada ");
    scanf(" %[^\n]", disciplina);

    printf("GPE17N20241 ");
    scanf(" %[^\n]", turma);

    printf("Danylo Rodrigues ");
    scanf(" %[^\n]", nome);

    printf("UC25101463 ");
    scanf("%d", &matricula);

    printf("1.89 ");
    scanf("%f", &altura);

    printf("91Kg");
    scanf("%f", &massa);

    return 0;
}

