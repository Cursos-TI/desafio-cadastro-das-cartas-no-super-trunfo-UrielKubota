#include <stdio.h>

int main (){
// Atributos das cartas
    float populacao;
    long area;
    float PIB;
    int pontosturisticos;
    char nome [50];
//Inserção das informações das cartas
    printf ("Nome:\n");
    scanf ("%s", &nome);
    printf ("População:\n");
    scanf ("%lf", &populacao); 
    printf ("Area:\n");
    scanf ("%Lf", &area); 
    printf ("PIB:\n");
    scanf ("%f", &PIB); 
    printf ("Pontos Turisticos:\n");
    scanf ("%d", &pontosturisticos); 
// Dados completos da carta
    printf ("Nome: %s População: %f Area: %f\n", nome, populacao, area);
    printf ("PIB: %f trilhoes Pontos Turisticos: %d\n",PIB, pontosturisticos);


}
