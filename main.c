#include <stdio.h>

int main() {
    char nome[50];
    char turma[20];
    char disciplina[50];
    int matricula;
    float altura, massa;

    
    printf("Digite a disciplina: ");
    scanf(" %[^\n]", disciplina);

    printf("Digite a turma: ");
    scanf(" %[^\n]", turma);

    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite a matrícula: ");
    scanf("%d", &matricula);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a massa: ");
    scanf("%f", &massa);

    return 0;
}

