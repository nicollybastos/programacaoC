#include <stdio.h>

int main() {
    // Este valor excede o limite de um int normal
    int signedNumber = 3000000000; 
    // usingned int consegue atribuir o valor
    unsigned int unsignedNumber = 3000000000;
 
    // ele vai mandar um valor de overflow
    printf("Número com sinal: %d\n", signedNumber);
    // guardando em %u ele mostra o valor
    printf("Número sem sinal: %u\n", unsignedNumber);
 
    return 0;
}
