#include <stdio.h>


    int main () {
    char pais1 [50]  = "BRASIL";
    char pais2 [50]  = "ARGENTINA";
    float cartas;
    char atributos;
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 69928000000;
    int turisticos1 = 50;
    int populacao2 = 6748000; 
    float area2 = 1200.25;
    float pib2 = 30050000000;
    int turisticos2= 30;
    float densidade1, densidade2, pibcapita1,pibcapita2, superpoder1,superpoder2;

    // Regra do Jogo
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibcapita1 = (float) pib1 / populacao1;
    pibcapita2 = (float) pib2 / populacao2;
    superpoder1 = (long double) (populacao1 + area1 + pib1 + turisticos1);
    superpoder2 = (long double) (populacao2 + area2 + pib2 + turisticos2);
    
    // Comparações de carta Inicio do jogo 
    printf("\nComparações:\n");
    printf("Bem-Vindo ao Jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um atributo\n");
    printf("D. Densidade Populacional\n");
    printf("P. PIB por Capita\n");
    printf("S. Super Poder\n");

    printf("Escolha a Comparação da Carta 1:");
    scanf( "%c", &atributos);

    
    switch (atributos)
    {
    case 'D':
    case 'd':
    printf("Você escolheu a opção Densidade Populacional\n");
    printf ("Nome do Pais da Carta1 %s\nNome do Pais da Carta2: %s\n", pais1, pais2);
    printf ("Densidade Populacional da Carta 1: %.2f \n", densidade1);
    printf ("Densidade Populacional da Carta 2: %.2f \n", densidade2);
        cartas = densidade1 < densidade2 ? printf("carta1 Venceu\n") : printf("Carta2 Venceu\n");
    break;
    case 'P':
    case 'p':
    printf("Você escolheu a opção PIB por Capita\n");
    printf ("Nome do Pais da Carta1 %s\nNome do Pais da Carta2: %s\n", pais1, pais2);
    printf ("PIB por Capita da Carta 1: %.2f \n", pibcapita1);
    printf ("PIB por Capita da Carta 2: %.2f \n", pibcapita2);
        cartas = pibcapita1 > pibcapita2 ? printf("Carta1 venceu\n") : printf("Carta2 Venceu\n");
    break;
    case 'S':
    case 's':
    printf("Você escolheu a opção Super Poder\n");
    printf ("Nome do Pais da Carta1 %s\nNome do Pais da Carta2: %s\n", pais1, pais2);
    printf ("Super Poder da Carta 1 %.2f \n", superpoder1);
    printf ("Super Poder da Carta 2 %.2f \n", superpoder2);
        cartas = superpoder1 > superpoder2 ? printf("Carta1 venceu\n") : printf("Carta2 perdeu\n");
    break;
    
    default:
    printf("Opção de jogo Inválida\n");
    break;
    }
  }
  