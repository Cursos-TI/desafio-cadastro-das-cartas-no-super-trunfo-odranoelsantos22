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

    //mostrar carta1
    printf("=carta1=\n"); 
    printf("estado: %c\n",estado1);
    printf("codigo: %s\n",codigo1);
    printf("nome da cidade: %s\n", nome_da_cidade1);
    printf("populacao: %d habitantes\n",populacao1);
    printf("area: %.2f km²\n", area1);
    printf("pib: %.2f km²\n", pib1);
    printf("numeros de pontos turisticos:%d\n", numeros_de_pontos_turisticos1);
    
    //mostrar carta2
    printf("=carta2=\n");
    printf("estado: %c\n", estado2);
    printf("estado: %c\n", estado2);
    printf("nome da cidade: %s\n",nome_da_cidade2);
    printf("populacao: %d habitantes\n", populacao2);
    printf("area: %2.f km²\n" , area2);
    printf("pib: %.2f km²\n", pib2);
    printf("numeros de pontos turisticos: %d\n", numeros_de_pontos_turisticos2);


return 0;

}