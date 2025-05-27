#include <stdio.h>

int quadrado(int numero) {
    return numero * numero;
}

int main() {
    int resultado = quadrado(5);
    printf("O quadrado de 5 = %d\n", resultado);
    return 0;
}