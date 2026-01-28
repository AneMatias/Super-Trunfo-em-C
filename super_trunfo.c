#include <stdio.h>

int main() {
    char estado1[10], estado2[10];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade_populacional1, densidade_populacional2;
    float per_capita1, per_capita2;


// 1- RECEBER OS DADOS DAS 2 CARTAS
// ===== CARTA 1 ===== 
    printf("=== Digite os dados da primeira carta ===\n");
    printf("Estado (A a H): ");
    scanf("%s", estado1);
    printf("Código (3 caracteres): \n");
    scanf("%s", codigo1);
    printf("Cidade: \n");
    scanf(" %[^\n]", cidade1);
    printf("População: \n");
    scanf(" %d", &populacao1);
    printf("Área: \n");
    scanf(" %f", &area1);
    printf("PIB: \n");
    scanf(" %f", &pib1);
    printf("Número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos1);


// ===== CARTA 2 ===== 
    printf("=== Digite os dados da segunda carta ===\n");
    printf("Estado (A a H): ");
    scanf("%s", estado2);
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
    printf("=========================\n");


// 2- CALCULO DENSIDADE E PER CAPITA    
    densidade_populacional1=(populacao1/area1);
    densidade_populacional2=(populacao2/area2);

    per_capita1=(pib1/populacao1);
    per_capita2=(pib2/populacao2);
    


// -calcular super poder
    float inverso_densidade1 = 1.0 / densidade_populacional1;
    float inverso_densidade2 = 1.0 / densidade_populacional2;

    float superPoder1 = populacao1+area1+pib1+pontosTuristicos1+per_capita1+inverso_densidade1;
    float superPoder2 = populacao2+area2+pib2+pontosTuristicos2+per_capita2+inverso_densidade2;


// 3- atributo será POPULAÇÃO
    int atributo = 1;


// 4- o MAIOR valor vence
    if (atributo= populacao1 > populacao2){

    } else {

    }

// 5- exibir o resultado
    printf("Comparando a POPULAÇÃO: \n");
    printf("Carta 1 - %s, %s: %i \n", cidade1, estado1, populacao1);
    printf("CArta 2 - %s, %s: %i \n", cidade2, estado2, populacao2);
    
    if (atributo){  
        printf("CARTA 1 (%s) VENCEU! \n", cidade1);
    } else {
        printf("CARTA 2 (%s) VENCEU!\n", cidade2);
    }

    printf("=========================\n");
    
    
    
    return 0;

}
