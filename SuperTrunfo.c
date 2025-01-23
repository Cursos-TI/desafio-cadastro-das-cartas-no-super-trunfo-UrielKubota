#include <stdio.h>

int main (){
// Atributos das cartas
    float populacao;
    float area;
    float PIB;
    int pontosturisticos;
    char nome [50];
//Inserção das informações das cartas
    printf ("Nome:\n");
    scanf ("%s", &nome);
    printf ("População:\n");
    scanf ("%f", &populacao); 
    printf ("Area:\n");
    scanf ("%f", &area); 
    printf ("PIB:\n");
    scanf ("%f", &PIB); 
    printf ("Pontos Turisticos:\n");
    scanf ("%d", &pontosturisticos); 
// Dados completos da carta
    printf ("Nome: %s\n", nome);
    printf ("População: %f\n", populacao);
    printf ("Area: %f\n", area);
    printf ("PIB: %f\n", PIB);
    printf ("Pontos Turisticos: %d\n", pontosturisticos);

return 0;

}
