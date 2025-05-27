#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[50];
    float nota;
};

void imprimeAlunos(struct Aluno *alunos, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Aluno: %s, Nota: %.2f\n", alunos[i].nome, alunos[i].nota);
    }
}

int main() {
    int qtd;
    printf("Quantos alunos? ");
    scanf("%d", &qtd);

    struct Aluno *alunos = (struct Aluno *)malloc(qtd * sizeof(struct Aluno));

    for (int i = 0; i < qtd; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    imprimeAlunos(alunos, qtd);

    free(alunos);
    return 0;
}
