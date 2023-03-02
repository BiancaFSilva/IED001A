#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite acentuação
	
	int array[6] = {1, 0, 5, -2, -5, 7};	// Declaração e inicialização do array
	int soma, i;
	
	soma = array[0] + array[1] + array[5];	// Soma de valores específicos	
	printf("A soma dos valores das posições 0, 1 e 5 do array é: \n%d + %d + %d = %d \n\n", array[0], array[1], array[5], soma);
	
	array[4] = 100;		// Alteração de uma posição específica
	
	printf("Valores atribuídos no array \n");
	for (i = 0; i <= 5; i++) {	// Percorre o array e exibe os dados
		printf("Posição %d: %d \n", i, array[i]);
	};
	
  	return(0);
}
