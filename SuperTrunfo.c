#include <stdio.h>

int main (){
// Atributos das cartas
    float populacao;
    double area;
    long PIB;
    int pontosturisticos;
    char nome [50];
//Cartas
    printf ("Pais\n");
    printf ("Nome:\n");
    scanf ("%s", &nome);
    printf ("População do Brasil:\n");
    scanf ("%f", &populacao); 
    printf ("Area do Brasil:\n");
    scanf ("%Lf", &area); 
    printf ("PIB do Brasil:\n");
    scanf ("%lf", &PIB); 
    printf ("Pontos Turisticos do Brasil:\n");
    scanf ("%d", &pontosturisticos); 

    printf ("Nome: %s População do Brasil: %f milhoes Area: %f km\n", nome, populacao, area);
    printf ("PIB: %f trilhoes Pontos Turisticos: %d\n",PIB, pontosturisticos);




}