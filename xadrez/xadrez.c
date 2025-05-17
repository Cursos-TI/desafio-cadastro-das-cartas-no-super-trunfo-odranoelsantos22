#include <stdio.h>

int main(){
printf("desafio xadrez!\n");

    // Dados da Carta 1
    char estado1 = 'A';
    char codigo1[50] = "A01";
    char nome_da_cidade1[50] = "Sao Paulo"; 
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; 
    int numeros_de_pontos_turisticos1 = 50;

    // Dados da Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nome_da_cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; 
    int numeros_de_pontos_turisticos2 = 30;
    char nome1[50], nome2[50];

    // Cálculos carta 1
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Cálculos carta 2
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    //mostrar carta1
    printf("=carta1=\n"); 
    printf("estado: %c\n",estado1);
    printf("codigo: %s\n",codigo1);
    printf("nome da cidade: %s\n", nome_da_cidade1);
    printf("populacao: %d habitantes\n",populacao1);
    printf("area: %.2f km²\n", area1);
    printf("pib: %.2f km²\n", pib1);
    printf("numeros de pontos turisticos:%d\n", numeros_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n");

    //mostrar carta2
    printf("=carta2=\n");
    printf("estado: %c\n", estado2);
    printf("estado: %c\n", estado2);
    printf("nome da cidade: %s\n",nome_da_cidade2);
    printf("populacao: %d habitantes\n", populacao2);
    printf("area: %2.f km²\n" , area2);
    printf("pib: %.2f km²\n", pib2);
    printf("numeros de pontos turisticos: %d\n", numeros_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

     // Comparação de Cartas:
    printf("\n===== COMPARAÇÃO =====\n");

    if (populacao1 > populacao2) {
        printf("População: %s venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("População: %s venceu!\n", nome2);
    } else {
        printf("População: Empate!\n");
    }

    if (area1 > area2) {
        printf("Área: %s venceu!\n", nome1);
    } else if (area2 > area1) {
        printf("Área: %s venceu!\n", nome2);
    } else {
        printf("Área: Empate!\n");
    }

    if (pib1 > pib2) {
        printf("PIB: %s venceu!\n", nome1);
    } else if (pib2 > pib1) {
        printf("PIB: %s venceu!\n", nome2);
    } else {
        printf("PIB: Empate!\n");
    }

    if (densidade1 > densidade2) {
        printf("Densidade: %s venceu!\n", nome1);
    } else if (densidade2 > densidade1) {
        printf("Densidade: %s venceu!\n", nome2);
    } else {
        printf("Densidade: Empate!\n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per capita: %s venceu!\n", nome1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("PIB per capita: %s venceu!\n", nome2);
    } else {
        printf("PIB per capita: Empate!\n");
    }

    return 0;
}