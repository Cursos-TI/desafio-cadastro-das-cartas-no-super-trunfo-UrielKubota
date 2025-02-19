#include <stdio.h>

int main (){
// Atributos da carta 01
    float area, PIB;
    int pontosturisticos, populacao;
    char codigodacarta [50],estado [50],nomedacidade[50];
    float densidadepopulacional, PIBpercapita; 
//Inserção das informações das cartas
    printf ("Digite o Estado:\n");
    scanf ("%s", &estado);
    printf ("Digite o Código da Carta:\n");
    scanf ("%s", &codigodacarta);
    printf ("Digite o Nome da Cidade:\n");
    scanf ("%s", &nomedacidade);
    printf ("Digite o número da População:\n");
    scanf ("%d", &populacao); 
    printf ("Digite a Area:\n");
    scanf ("%f", &area); 
    printf ("Digite o PIB:\n");
    scanf ("%f", &PIB); 
    printf ("Digite o número de Pontos Turisticos:\n");
    scanf ("%d", &pontosturisticos); 
// Dados completos da carta
    printf ("Carta 01\n");
    printf ("Nome da Cidade: %s\n", estado);
    printf ("Código: %s\n", codigodacarta);
    printf ("Nome da Cidade: %s\n", nomedacidade);
    printf ("População: %d\n", populacao);
    printf ("Area: %f km\n", area);
    printf ("PIB: %f bilhões de reais\n", PIB);
    printf ("Pontos Turisticos: %d\n", pontosturisticos);
    printf ("Densidade Populacional: %f\n", populacao / area);
    printf ("PIB per Capita: %f\n", PIB / populacao);

return 0;

}
