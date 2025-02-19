#include <stdio.h>

int main (){
// Atributos das cartas
    float area, PIB;
    int pontosturisticos, populacao;
    char nome [50];
    float densidadepopulacional, PIBpercapita; 
//Inserção das informações das cartas
    printf ("Digite o Código da Carta:\n");
    scanf ("%s", &nome);
    printf ("Digite o Nome da Cidade:\n");
    scanf ("%s", &nome);
    printf ("Digite o número da População:\n");
    scanf ("%d", &populacao); 
    printf ("Digite a Area:\n");
    scanf ("%f", &area); 
    printf ("Digite o PIB:\n");
    scanf ("%f", &PIB); 
    printf ("Digite o número de Pontos Turisticos:\n");
    scanf ("%d", &pontosturisticos); 
// Dados completos da carta
    printf ("Código: %s\n", nome);
    printf ("Nome da Cidade: %s\n", nome);
    printf ("População: %d\n", populacao);
    printf ("Area: %f km\n", area);
    printf ("PIB: %f bilhões de reais\n", PIB);
    printf ("Pontos Turisticos: %d\n", pontosturisticos);
    printf ("Densidade Populacional: %f\n", populacao / area);
    printf ("Densidade Populacional: %f\n", PIB / populacao);

return 0;

}
