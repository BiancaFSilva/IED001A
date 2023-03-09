#include <stdio.h>

/* Ponteiros são endereços de memória, são utilizados dois operadores especiais:
 * &var, que identifica o endereço da variável
 * *var, que identifica o conteúdo apontado pelo endereço da variável 
 */
int main () {
    int m = 5;  // Variável armazena um valor inteiro
    int *n;     // Declaração do ponteiro, variável armazena o endereço da variável de valor inteiro

    n = &m;     // Atribui um endereço ao ponteiro

    printf("Valor: %d \n", m);   // Exibe o valor armazenado na váriável
    printf("Endereço: %d", n);   // Exibe o endereço dessa variável

    return(0);
} 