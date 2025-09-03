#include <stdio.h>

   /* Principais especificadores
        
   %d = imprime um n° inteiro decimal
   %i = equivalente a %d
   %f = imprime um n° flutuante no formato padrão
   %e = impreme um n° de ponto flutuante na notação ciêntifica
   %c = imprime um único caractere
   %s = imprime uma cadeia (string) de carcteres
   
   */

int main(){
    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";

    printf("Idade: %d anos\n", idade);
    printf("Altura: %2.f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);

    return 0;
}
