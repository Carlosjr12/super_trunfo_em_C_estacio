#include <stdio.h>
#include <ctype.h>

int main() {
    char estado1, cidade1[50], codigo1[3];
    int populacao1, num_ponto_turistico1;
    float area1, pib1;

    char estado2, cidade2[50], codigo2[3];
    int populacao2, num_ponto_turistico2;
    float area2, pib2;

    // Entrada de dados Para Carta 1
    printf("Insira os dados da Carta 1:\n");

    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    printf("Código da Carta ('01' a '04'): ");
    scanf(" %s", codigo1);
    
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    
    printf("Número de População: ");
    scanf("%d", &populacao1);

    
    printf("Área (em km²): ");
    scanf("%f", &area1);

    
    printf("PIB: ");
    scanf("%f", &pib1);

    
    printf("Número de pontos Turisricos: ");
    scanf("%d", &num_ponto_turistico1);

    
    printf("======================================\n");
    // Entrada de dados Para Carta 2
    printf("Insira os dados da Carta 2:\n");
    
    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);
    
    printf("Código da Carta ('01' a '04'): ");
    scanf(" %s", codigo2);
    
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    
    printf("Número de População: ");
    scanf("%d", &populacao2);
    
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    
    printf("Número de pontos Turisricos: ");
    scanf("%d", &num_ponto_turistico2);
    
    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico2);

    return 0;
}
