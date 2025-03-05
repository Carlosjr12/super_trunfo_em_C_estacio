#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração das variáveis para os dados das Cartas 1 e 2
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int num_ponto_turistico1, num_ponto_turistico2;

    // Entrada dos dados da Carta 1
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

    // Entrada dos dados da Carta 2
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

    // Escolha dos dois atributos para comparação
    int atributo1, atributo2;

    // Seleção do primeiro atributo
    do
    {
        printf("\nEscolha o primeiro atributo para comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("Digite sua escolha (1-5): ");
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 5)
            printf("Opção inválida! Tente novamente.\n");
    } while (atributo1 < 1 || atributo1 > 5);

    // Seleção do segundo atributo (dinâmico: não pode ser igual ao primeiro)
    do
    {
        printf("\nEscolha o segundo atributo para comparação (não pode ser o mesmo do primeiro):\n");
        if (atributo1 != 1)
            printf("1 - População\n");
        if (atributo1 != 2)
            printf("2 - Área\n");
        if (atributo1 != 3)
            printf("3 - PIB\n");
        if (atributo1 != 4)
            printf("4 - Número de pontos turísticos\n");
        if (atributo1 != 5)
            printf("5 - Densidade demográfica\n");
        printf("Digite sua escolha: ");
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1)
            printf("Opção inválida! Tente novamente.\n");
    } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Variáveis para acumular os "pontos" de cada carta na soma dos atributos
    // Para atributos cuja lógica é "maior vence", utilizamos o valor bruto.
    // Para densidade, como "menor vence", somamos o valor transformado (multiplicado por -1)
    double somaCarta1 = 0, somaCarta2 = 0;

    // Comparação do primeiro atributo escolhido
    printf("\n--- Comparação do Primeiro Atributo ---\n");
    switch (atributo1)
    {
    case 1: // População
        printf("Atributo: População\n");
        printf("%s: %lu\n", nome1, populacao1);
        printf("%s: %lu\n", nome2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (populacao2 > populacao1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 += populacao1;
        somaCarta2 += populacao2;
        break;
    case 2: // Área
        printf("Atributo: Área\n");
        printf("%s: %.2f km²\n", nome1, area1);
        printf("%s: %.2f km²\n", nome2, area2);
        if (area1 > area2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (area2 > area1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 += area1;
        somaCarta2 += area2;
        break;
    case 3: // PIB
        printf("Atributo: PIB\n");
        printf("%s: %.2f bilhões\n", nome1, pib1);
        printf("%s: %.2f bilhões\n", nome2, pib2);
        if (pib1 > pib2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (pib2 > pib1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 += pib1;
        somaCarta2 += pib2;
        break;
    case 4: // Número de pontos turísticos
        printf("Atributo: Número de pontos turísticos\n");
        printf("%s: %d\n", nome1, num_ponto_turistico1);
        printf("%s: %d\n", nome2, num_ponto_turistico2);
        if (num_ponto_turistico1 > num_ponto_turistico2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (num_ponto_turistico2 > num_ponto_turistico1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 += num_ponto_turistico1;
        somaCarta2 += num_ponto_turistico2;
        break;
    case 5: // Densidade demográfica – menor vence
        printf("Atributo: Densidade demográfica\n");
        printf("%s: %.2f habitantes/km²\n", nome1, densidade1);
        printf("%s: %.2f habitantes/km²\n", nome2, densidade2);
        if (densidade1 < densidade2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (densidade2 < densidade1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 -= densidade1;
        somaCarta2 -= densidade2;
        break;
    }

    // Comparação do segundo atributo escolhido
    printf("\n--- Comparação do Segundo Atributo ---\n");
    switch (atributo2)
    {
    case 1: // População
        printf("Atributo: População\n");
        printf("%s: %lu\n", nome1, populacao1);
        printf("%s: %lu\n", nome2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (populacao2 > populacao1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 += populacao1;
        somaCarta2 += populacao2;
        break;
    case 2: // Área
        printf("Atributo: Área\n");
        printf("%s: %.2f km²\n", nome1, area1);
        printf("%s: %.2f km²\n", nome2, area2);
        if (area1 > area2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (area2 > area1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 += area1;
        somaCarta2 += area2;
        break;
    case 3: // PIB
        printf("Atributo: PIB\n");
        printf("%s: %.2f bilhões\n", nome1, pib1);
        printf("%s: %.2f bilhões\n", nome2, pib2);
        if (pib1 > pib2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (pib2 > pib1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 += pib1;
        somaCarta2 += pib2;
        break;
    case 4: // Número de pontos turísticos
        printf("Atributo: Número de pontos turísticos\n");
        printf("%s: %d\n", nome1, num_ponto_turistico1);
        printf("%s: %d\n", nome2, num_ponto_turistico2);
        if (num_ponto_turistico1 > num_ponto_turistico2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (num_ponto_turistico2 > num_ponto_turistico1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 += num_ponto_turistico1;
        somaCarta2 += num_ponto_turistico2;
        break;
    case 5: // Densidade demográfica – menor vence
        printf("Atributo: Densidade demográfica\n");
        printf("%s: %.2f habitantes/km²\n", nome1, densidade1);
        printf("%s: %.2f habitantes/km²\n", nome2, densidade2);
        if (densidade1 < densidade2)
            printf("Resultado: %s vence neste atributo!\n", nome1);
        else if (densidade2 < densidade1)
            printf("Resultado: %s vence neste atributo!\n", nome2);
        else
            printf("Resultado: Empate neste atributo!\n");
        somaCarta1 -= densidade1;
        somaCarta2 -= densidade2;
        break;
    }

    // Decisão final com base na soma dos pontos dos dois atributos
    printf("\n--- Resultado Final ---\n");
    printf("%s: %.2f pontos\n", nome1, somaCarta1);
    printf("%s: %.2f pontos\n", nome2, somaCarta2);
    if (somaCarta1 > somaCarta2)
        printf("Resultado: %s é o vencedor!\n", nome1);
    else if (somaCarta2 > somaCarta1)
        printf("Resultado: %s é o vencedor!\n", nome2);
    else
        printf("Resultado: É um empate!\n");

    return 0;
}
