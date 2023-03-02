#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite acentua��o
	
	int array[6] = {1, 0, 5, -2, -5, 7};	// Declara��o e inicializa��o do array
	int soma, i;
	
	soma = array[0] + array[1] + array[5];	// Soma de valores espec�ficos	
	printf("A soma dos valores das posi��es 0, 1 e 5 do array �: \n%d + %d + %d = %d \n\n", array[0], array[1], array[5], soma);
	
	array[4] = 100;		// Altera��o de uma posi��o espec�fica
	
	printf("Valores atribu�dos no array \n");
	for (i = 0; i <= 5; i++) {	// Percorre o array e exibe os dados
		printf("Posi��o %d: %d \n", i, array[i]);
	};
	
  	return(0);
}
