#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    vetor = (int *)malloc(5 * sizeof(int));

    if (vetor == NULL) {
        printf("Erro de alocação.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        vetor[i] = i + 1;
        printf("%d ", vetor[i]);
    }

    free(vetor); // Libera a memória
    return 0;
}
