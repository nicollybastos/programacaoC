#include <stdio.h>

int main() {
     // Valor máximo de int
    int regularNumber = 2147483647;
    long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    // Valor maior que o máximo de int
    bigNumber = 2147483648; // final 8 = maior que o int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);
 
    return 0;
}
