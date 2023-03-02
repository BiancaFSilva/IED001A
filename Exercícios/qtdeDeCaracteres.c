#include <stdio.h>

int main()
{
    char palavra[20];
    int i, qtde;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	for (i = 0; palavra[i] != '\0'; i++) {
		qtde++;
	} 
		
	qtde = qtde - 1;	
	printf("A cadeia de caracteres \"%s\" tem %d letras", palavra, qtde);

    return 0;
}
