#include <stdio.h>
#include <ctype.h>

int main() {
    // Definição das variáveis para as Cartas 1 e 2
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    int num_ponto_turistico1, num_ponto_turistico2;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    // Entrada de dados da Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico1);

    // Cálculo da densidade populacional da Carta 1
    densidade1 = populacao1 / area1;

    // Entrada de dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico2);

    // Cálculo da densidade populacional da Carta 2
    densidade2 = populacao2 / area2;

    // Menu interativo para escolher o atributo
    int escolha;
    printf("\nEscolha o atributo para a comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Lógica de comparação usando switch
    switch (escolha) {
        case 1: // População
            printf("\nComparando População:\n");
            printf("%s: %lu\n", nome1, populacao1);
            printf("%s: %lu\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nComparando Área:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nComparando PIB:\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Número de pontos turísticos
            printf("\nComparando Número de Pontos Turísticos:\n");
            printf("%s: %d\n", nome1, num_ponto_turistico1);
            printf("%s: %d\n", nome2, num_ponto_turistico2);
            if (num_ponto_turistico1 > num_ponto_turistico2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (num_ponto_turistico2 > num_ponto_turistico1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("\nComparando Densidade Demográfica:\n");
            printf("%s: %.2f habitantes/km²\n", nome1, densidade1);
            printf("%s: %.2f habitantes/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) { // Regra invertida
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Escolha inválida!\n");
    }

    return 0;
}
