#include <stdio.h>

int main (){
// Atributos das cartas:
    float area, PIB, area2, PIB2;
    unsigned long int ponto, populacao, ponto2, populacao2;
    char codigo [20],estado [20],cidade[20],
    codigo2 [20], estado2 [20], cidade2 [20];
    float densidade, PIBpc, densidade2, PIBpc2; 
    float superpoder = area + PIB + ponto + densidade + PIBpc;
    float superpoder2 = area2 + PIB2 + ponto2 + densidade2 + PIBpc; 
//Inserção das informações da primeira carta:  
    printf ("Digite o Estado:\n");
    scanf ("%s", &estado);
    printf ("Digite o Código da Carta:\n");
    scanf ("%s", &codigo);
    printf ("Digite o Nome da Cidade:\n");
    scanf ("%s", &cidade);
    printf ("Digite o número da População:\n");
    scanf ("%u", &populacao); 
    printf ("Digite a Area:\n");
    scanf ("%f", &area); 
    printf ("Digite o PIB:\n");
    scanf ("%f", &PIB); 
    printf ("Digite o número de Pontos Turisticos:\n");
    scanf ("%u", &ponto); 
// Dados completos da carta 1:
    printf ("Carta 1\n");
    printf ("Estado: %s\n", estado);
    printf ("Código: %s\n", codigo);
    printf ("Nome da Cidade: %s\n", cidade);
    printf ("População: %u\n", populacao);
    printf ("Area: %2.f km2\n", area);
    printf ("PIB: %2.f bilhões de reais\n", PIB);
    printf ("Pontos Turisticos: %d\n", ponto);
    printf ("Densidade Populacional: %2.f hab/km\n", populacao/area);
    printf ("PIB per Capita: %2.f\n", PIB/populacao);
    printf ("Super Poder: %2.f\n",  superpoder = area + PIB + ponto + densidade + PIBpc); 
    
    //Inserção das informações da segunda carta:  
    printf ("Digite o Estado:\n");
    scanf ("%s", &estado2);
    printf ("Digite o Código da Carta:\n");
    scanf ("%s", &codigo2);
    printf ("Digite o Nome da Cidade:\n");
    scanf ("%s", &cidade2);
    printf ("Digite o número da População:\n");
    scanf ("%u", &populacao2); 
    printf ("Digite a Area:\n");
    scanf ("%f", &area2); 
    printf ("Digite o PIB:\n");
    scanf ("%f", &PIB2); 
    printf ("Digite o número de Pontos Turisticos:\n");
    scanf ("%u", &ponto2);
    // Imprime as informacoes da segunda carta:
    printf ("Carta 2\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %u\n", populacao2);
    printf ("Area: %2.f km2\n", area2);
    printf ("PIB: %2.f bilhões de reais\n", PIB2);
    printf ("Pontos Turisticos: %d\n", ponto2);
    printf ("Densidade Populacional: %2.f hab/km\n", populacao2/area2);
    printf ("PIB per Capita: %2.f\n", PIB2/populacao2);
    printf ("Super Poder: %2.f\n",  superpoder2 = area2 + PIB2 + ponto2 + densidade2 + PIBpc2);
    
    //Comparação das cartas: 
    printf ("Comparação das Cartas:\n");
    //verifica o resultado e imprime o numero da carte vencedora. (1) para carta 1 e (0) para a carta 2
    printf ("Populacao: Carta %d venceu (%d)\n", (populacao > populacao2)? 1:2, populacao > populacao2);
    printf ("Area: Carta %d venceu (%d)\n", (area > area2)? 1:2, area > area2);
    printf ("PIB: Carta %d venceu (%d)\n", (PIB > PIB2)? 1:2, PIB > PIB2);
    printf ("Pontos Turisticos: Carta %d venceu (%d)\n", (ponto > ponto2)? 1:2, ponto > ponto2);
    printf ("Densidade Populacioal: Carta %d venceu (%d)\n", (densidade > densidade2)? 1:2, densidade > densidade2);
    printf ("PIB per Capita: Carta %d venceu (%d)\n", (PIBpc > PIBpc2)? 1:2, PIBpc > PIBpc2);
    printf ("Super Poder: Carta %d venceu (%d)\n", (superpoder > superpoder2)? 1:2, superpoder > superpoder2);


return 0;

}
