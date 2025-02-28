#include <stdio.h>
#include <ctype.h>

int main() {
    // Definição das variáveis para as Cartas 1 e 2
    char estado1[3], cidade1[50], codigo1[3];
    unsigned long int populacao1;
    int num_ponto_turistico1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;

    char estado2[3], cidade2[50], codigo2[3];
    unsigned long int populacao2;
    int num_ponto_turistico2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // Entrada de dados da Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (sigla, ex: SP): ");
    scanf("%s", estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    pib1 *= 1e9;  // Convertendo PIB para reais
    printf("Número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico1);

    // Cálculo dos atributos da Carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;

    // Entrada de dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (sigla, ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    pib2 *= 1e9;  // Convertendo PIB para reais
    printf("Número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico2);

    // Cálculo dos atributos da Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // Comparação com base em um único atributo (modifique aqui o atributo desejado)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
