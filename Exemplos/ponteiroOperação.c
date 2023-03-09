#include <stdio.h>

int main () {
    float x, y;
    float *z;     

    // Atribuição de valores    
    x = 2.0;
    *z = 5.0;

    y = x + (*z);   // Quando o se usa parenteses em um ponteiro é obtido o endereço dessa variável 

    printf("Endereço: %.0f", y);

    return(0);
} 