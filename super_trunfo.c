#include <stdio.h>

int main() {
    char pais1[30], pais2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade_populacional1, densidade_populacional2;
    float per_capita1, per_capita2;

    int opcao;


//  RECEBER OS DADOS DAS CARTAS
//  ===== CARTA 1 ===== 
    printf("=== Digite os dados da primeira carta ===\n");
    printf("Nome do País: ");
    scanf("%s", pais1);
    printf("População: \n");
    scanf(" %d", &populacao1);
    printf("Área: \n");
    scanf(" %f", &area1);
    printf("PIB: \n");
    scanf(" %f", &pib1);
    printf("Número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos1);


//  ===== CARTA 2 ===== 
    printf("=== Digite os dados da segunda carta ===\n");
    printf("Nome do País): ");
    scanf("%s", pais2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("=========================\n");


//  CALCULO DENSIDADE E PER CAPITA    
    densidade_populacional1=(populacao1/area1);
    densidade_populacional2=(populacao2/area2);

    per_capita1=(pib1/populacao1);
    per_capita2=(pib2/populacao2);
    


//  Calcular super poder
    float inverso_densidade1 = 1.0 / densidade_populacional1;
    float inverso_densidade2 = 1.0 / densidade_populacional2;

    float superPoder1 = populacao1+area1+pib1+pontosTuristicos1+per_capita1+inverso_densidade1;
    float superPoder2 = populacao2+area2+pib2+pontosTuristicos2+per_capita2+inverso_densidade2;


// MENU INTERATIVO
   printf("\n=== MENU DE COMPARAÇÃO ===\n");
   printf("1- População\n");
   printf("2- Área\n");
   printf("3- PIB\n");
   printf("4- POntos Turísticos\n");
   printf("5- Densidade Demográfica\n");
   printf("Digite o número da opção desejada: \n");
   scanf("%d", &opcao);

   printf("\n=== RESULTADO ===\n");


// COMPARAÇÃO DE ATRIBUTOS
    switch (opcao){
        case 1:
            printf("POPULAÇÃO\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("ÁREA\n");
            printf("%s: %f\n", pais1, area1);
            printf("%s: %f\n", pais2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB\n");
            printf("%s: %f\n", pais1, pib1);
            printf("%s: %f\n", pais2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("PONTOS TURÍSTICOS\n");
            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;  
        case 5:
            printf("DENSIDADE DEMOGRÁFICA\n");
            printf("%s: %f\n", pais1, densidade_populacional1);
            printf("%s: %f\n", pais2, densidade_populacional2);

            if (densidade_populacional1 < densidade_populacional2)
                printf("Vencedor: %s\n", pais1);
            else if (densidade_populacional2 < densidade_populacional1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;  
        
        default:
            printf("Opção inválida!\n");
    }
    
     
    
    return 0;

}
