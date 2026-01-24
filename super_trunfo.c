#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

  // ===== CARTA 1 ===== //
    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    scanf(" %s", &estado1);
    printf("Código (3 caracteres): \n");
    scanf("%s", codigo1);
    printf("Cidade: \n");
    scanf(" %[^\n]", cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área: \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);


    // ===== CARTA 2 ===== //
    printf("Digite os dados da segunda carta:\n");
    printf("Estado: ");
    scanf(" %s", &estado2);
    printf("Código (3 caracteres): ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== COMPARAÇÃO DAS CARTAS ===== //
    printf("\nComparação das cartas:\n");
    printf("CARTA 1 =========CARTA 2\n");
    printf("Estado: %c ========= %c\n", estado1, estado2);
    printf("Código: %s ========= %s\n", codigo1, codigo2);
    printf("Cidade: %s ========= %s\n", cidade1, cidade2);
    printf("População: %d ========= %d\n", populacao1, populacao2);
    printf("Área: %.2f ========= %.2f\n", area1, area2);
    printf("PIB: %.2f ========= %.2f\n", pib1, pib2);
    printf("Número de pontos turísticos: %d ========= %d\n", pontosTuristicos1, pontosTuristicos2);

    return 0;
}  