#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este programa compara duas cartas de cidades fixas com base em um atributo escolhido.

int main() {
    // Definição das variáveis das duas cidades (cadastradas fixas)
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699000000000.0;
    int pontosTuristicos1 = 50;

    char estado2[] = "RJ";
    char codigo2[] = "A02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6710000;
    float area2 = 1182.30;
    float pib2 = 450000000000.0;
    int pontosTuristicos2 = 40;

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // ==== Escolha do atributo para comparar ====
    // Para simplificar, vamos fixar como "população"
    printf("=== Comparacao de Cartas Super Trunfo ===\n");
    printf("Atributo escolhido: Populacao\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    // Comparação usando if-else
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
