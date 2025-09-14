#include <stdio.h>

int main() {
    // === Cartas fixas ===
    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    int populacao1 = 214000000;      // habitantes
    int populacao2 = 46000000;

    float area1 = 8515767.0;         // km²
    float area2 = 2780400.0;

    float pib1 = 1800000000000.0;    // PIB total
    float pib2 = 640000000000.0;

    int pontosTuristicos1 = 50;
    int pontosTuristicos2 = 30;

    // densidade demográfica (habitantes por km²)
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // === Menu interativo ===
    int opcao;

    printf("=== Comparacao de Cartas Super Trunfo ===\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparacao ===\n");

    switch (opcao) {
        case 1: // População
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km2\n", pais1, area1);
            printf("%s: %.2f km2\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos turisticos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos turisticos\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade (regra invertida)
            printf("Atributo escolhido: Densidade Demografica (menor vence)\n");
            printf("%s: %.4f hab/km2\n", pais1, densidade1);
            printf("%s: %.4f hab/km2\n", pais2, densidade2);

            // Menor vence
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
