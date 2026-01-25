#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade_populacional1, densidade_populacional2;
    float per_capita1, per_capita2;



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


// ==== CALCULO NVL AVENTUREIRO ==== //   
    densidade_populacional1=(populacao1/area1);
    densidade_populacional2=(populacao2/area2);

    per_capita1=(pib1/populacao1);
    per_capita2=(pib2/populacao2);


// ===== COMPARAÇÃO DAS CARTAS ===== //
    printf("\n===Carta 1===\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %2f\n", densidade_populacional1);
    printf("PIB Per Capita: %2f \n", per_capita1);

    printf("=====================");

    printf("\n===Carta 2===\n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Àrea: %2f \n", area2);
    printf("PIB: %2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %2f \n", densidade_populacional2);
    printf("PIb per Capita: %2f \n", per_capita2);
    printf("====================\n");


    return 0;
}
