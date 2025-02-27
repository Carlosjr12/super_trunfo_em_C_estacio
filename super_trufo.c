#include <stdio.h>
#include <ctype.h>

int main() {
    char estado1, cidade1[50], codigo1[3];
    unsigned long int populacao1;
    int num_ponto_turistico1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;

    char estado2, cidade2[50], codigo2[3];
    unsigned long int populacao2;
    int num_ponto_turistico2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;

    // Entrada de dados para Carta 1
    printf("Insira os dados da Carta 1:\n");

    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    printf("Código da Carta ('01' a '04'): ");
    scanf(" %s", codigo1);

    while (getchar() != '\n');  // Limpar buffer de entrada

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Número de População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    pib1 *= 1000000000;  // Convertendo para reais

    printf("Número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico1);

    // Cálculos para Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + num_ponto_turistico1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    printf("======================================\n");
    // Entrada de dados para Carta 2
    printf("Insira os dados da Carta 2:\n");

    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);

    printf("Código da Carta ('01' a '04'): ");
    scanf(" %s", codigo2);

    while (getchar() != '\n');  // Limpar buffer de entrada

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Número de População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    pib2 *= 1000000000;  // Convertendo para reais

    printf("Número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico2);

    // Cálculos para Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + num_ponto_turistico2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Comparação de Cartas
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (num_ponto_turistico1 > num_ponto_turistico2) ? 1 : 2, (num_ponto_turistico1 > num_ponto_turistico2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2, (densidade_populacional1 < densidade_populacional2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return 0;
}
