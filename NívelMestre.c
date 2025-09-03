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
    // Calculo - Carta 1
    float densidade1 = populacao1 / area1;
    float pibpercapita1 =  pib1 / populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + turismo1 + (1/densidade1) + pibpercapita1;

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
    // Calculo - Carta 2
    float densidade2 = populacao2 / area2;
    float pibpercapita2 =  pib2 / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + turismo2 + (1/densidade2) + pibpercapita2;

    /*

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
    // Calculo - Carta 3
    float densidade3 = populacao3 / area3;
    float pibpercapita3 =  pib3 / populacao3;
    float superpoder3 = populacao3 + area3 + pib3 + turismo3 + (1/densidade3) + pibpercapita3;

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
    // Calculo - Carta 4
    float densidade4 = populacao4 / area4;
    float pibpercapita4 =  pib4 / populacao4;
    float superpoder4 = populacao4 + area4 + pib4 + turismo4 + (1/densidade4) + pibpercapita4;

    */

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder %s é: %.2f\n", codigo1, superpoder1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder %s é: %.2f\n", codigo2, superpoder2);

    /*

    printf("\nCarta 3:\n");
    printf("Código: %s\n", codigo3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f km²\n", area3);
    printf("PIB: %.2f bilhões de reais\n", pib3);
    printf("Pontos turísticos: %d\n", turismo3);
    printf("Densidade Populacional: %.2f\n", densidade3);
    printf("PIB per Capita: %.2f\n", pibpercapita3);
    printf("Super Poder %s é: %.2f\n", codigo3, superpoder3);

    printf("\nCarta 4:\n");
    printf("Código: %s\n", codigo4);
    printf("População: %d\n", populacao4);
    printf("Área: %.2f km²\n", area4);
    printf("PIB: %.2f bilhões de reais\n", pib4);
    printf("Pontos turísticos: %d\n", turismo4);
    printf("Densidade Populacional: %.2f\n", densidade4);
    printf("PIB per Capita: %.2f\n", pibpercapita4);
    printf("Super Poder %s é: %.2f\n", codigo4, superpoder4);

    */

    // Ganhadores
    int populacao = populacao1 > populacao2;
    float area = area1 > area2;
    float pib = pib1 > pib2;
    int turismo = turismo1 > turismo2;
    float densidade = densidade1 > densidade2;
    float pibpercapita = pibpercapita1 > pibpercapita2;
    float superpoder = superpoder1 > superpoder2;

    printf("\nComparação de Cartas:\n");
    printf("População: %s\n", populacao ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Área: %s\n", area ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB: %s\n", pib ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Pontos Turísticos: %s\n", turismo ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade Populacional: %s\n", densidade ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per Capita: %s\n", pibpercapita ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Super Poder: %s\n", superpoder ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    return 0;
}
