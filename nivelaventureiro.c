#include <stdio.h>
#include <string.h>
int main() {

printf("nivel aventureiro\n");
printf("commit\n");

float populacao;
int numerodepontosturisticos;

float populacao2;
int numerodepontosturisticos2;  

float area;
float PIB;
float densidadepopulacional;
float PIBpercapita; 

float area2;
float PIB2;
float densidadepopulacional2;
float PIBpercapita2;

char estado[20];
char codigo [20];
char nomedacidade [20];

char estado2[20];
char codigo2 [20];
char nomedacidade2 [20];

    strcpy(estado, "Minas Gerais");
    strcpy(codigo, "MG");
    strcpy(nomedacidade, "Belo Horizonte");
    populacao = 2.315560;
    area = 331.4;
    PIB = 140.1;
    numerodepontosturisticos = 10;

    strcpy(estado2, "São Paulo");
    strcpy(codigo2, "SP");
    strcpy(nomedacidade2, "São Paulo");
    populacao2 = 11.895578;
    area2 = 1.521;
    PIB2 = 699.6;
    numerodepontosturisticos2 = 10;

    densidadepopulacional = populacao / area;
    PIBpercapita = PIB / populacao;
    
    densidadepopulacional2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;
    
    printf("*** CARTA 01 *** \n");

    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %f\n", populacao);
    printf("Área: %.1f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turisticos: %d\n", numerodepontosturisticos);
    printf("Densidade populacional: %f\n", densidadepopulacional);
    printf("PIB per capita: %f\n", PIBpercapita);

    printf("*** CARTA 02 *** \n");

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.f\n", PIB2);
    printf("Número de pontos turisticos: %d\n", numerodepontosturisticos2);
    printf("Densidade populacional: %f\n", densidadepopulacional2);
    printf("PIB per capita: %f\n", PIBpercapita2);

    printf("*** CARTA 01 *** \n");

    printf("Digite o estado: ");
    scanf ("%s", estado); 

    printf("Digite o codigo: ");
    scanf ("%s", codigo); 

    printf("Digite o nome da cidade: ");
    scanf ("%s", nomedacidade); 

    printf("Digite a população: ");
    scanf ("%f", &populacao);

    printf("Digite a área: ");
    scanf ("%f", &area);

    printf("Digite o PIB: ");
    scanf ("%f", &PIB);

    printf("Digite o número de pontos turisticos: ");
    scanf ("%d", &numerodepontosturisticos);

    printf("*** CARTA 02 *** \n");

    printf("Digite o estado: ");
    scanf ("%s", estado2); 

    printf("Digite o codigo: ");
    scanf ("%s", codigo2); 

    printf("Digite o nome da cidade: ");
    scanf ("%s", nomedacidade2); 

    printf("Digite a população: ");
    scanf ("%f", &populacao2);

    printf("Digite a área: ");
    scanf ("%f", &area2);

    printf("Digite o PIB: ");
    scanf ("%f", &PIB2);

    printf("Digite o número de pontos turisticos: ");
    scanf ("%d", &numerodepontosturisticos2);
    
    return 0;

}