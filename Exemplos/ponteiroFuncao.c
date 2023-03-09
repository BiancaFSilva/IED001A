#include <stdio.h>

void troca (int *a, int *b) {
    int aux;    // Variável que armazena o valor inicial para que este não seja perdido

    aux = *a;
    *a = *b;
    *b = aux;
}

int main () {
    int x = 3, y = 5;

    troca(&x, &y);  // Executa a função, passando0 os valores a serem trocados

    printf("x = %d \ny = %d", x, y);

    return 0;
}