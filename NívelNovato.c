#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4], codigo3[4], codigo4[4];
    int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int turismo1, turismo2, turismo3, turismo4;

    // Cadastro da Carta 1
    printf("\nCadastro da Carta 1:\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo2);

    // Cadastro da Carta 3
    printf("\nCadastro da Carta 3:\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo3);
    printf("Digite a população: ");
    scanf("%d", &populacao3);
    printf("Digite a área: ");
    scanf("%f", &area3);
    printf("Digite o PIB: ");
    scanf("%f", &pib3);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo3);

    // Cadastro da Carta 4
    printf("\nCadastro da Carta 4:\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo4);
    printf("Digite a população: ");
    scanf("%d", &populacao4);
    printf("Digite a área: ");
    scanf("%f", &area4);
    printf("Digite o PIB: ");
    scanf("%f", &pib4);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo4);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);

    printf("\nCarta 3:\n");
    printf("Código: %s\n", codigo3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f km²\n", area3);
    printf("PIB: %.2f bilhões de reais\n", pib3);
    printf("Pontos turísticos: %d\n", turismo3);

    printf("\nCarta 4:\n");
    printf("Código: %s\n", codigo4);
    printf("População: %d\n", populacao4);
    printf("Área: %.2f km²\n", area4);
    printf("PIB: %.2f bilhões de reais\n", pib4);
    printf("Pontos turísticos: %d\n", turismo4);

    return 0;
}

