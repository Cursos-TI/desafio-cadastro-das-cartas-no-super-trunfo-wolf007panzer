#include <stdio.h>
#include <string.h>
int main() {

printf("nivel aventureiro\n");
printf("commit\n");

float populacao;
int numerodepontosturisticos;

float populacao2;
int numerodepontosturisticos2;  

float populacao_;
int numerodepontosturisticos_;

float area;
float PIB;
float densidadepopulacional;
float PIBpercapita; 

float area2;
float PIB2;
float densidadepopulacional2;
float PIBpercapita2;

float area_;
float PIB_;
float densidadepopulacional_;
float PIBpercapita_;


char estado[20];
char codigo [20];
char nomedacidade [20];

char estado2[20];
char codigo2 [20];
char nomedacidade2 [20];

char estado_[20];
char codigo_ [20];
char nomedacidade_ [20];

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

    printf("*** DIGITE AS INFORMAÇÕES DE SUA CARTA *** \n");

    printf("Digite o estado: ");
    scanf ("%s", estado_); 

    printf("Digite o codigo: ");
    scanf ("%s", codigo_); 

    printf("Digite o nome da cidade: ");
    scanf ("%s", nomedacidade_); 

    printf("Digite a população: ");
    scanf ("%f", &populacao_);

    printf("Digite a área: ");
    scanf ("%f", &area_);

    printf("Digite o PIB: ");
    scanf ("%f", &PIB_);

    printf("Digite o número de pontos turisticos: ");
    scanf ("%d", &numerodepontosturisticos_);

   float resultadodensidade = populacao_ / area_;
   float resultadoPPC = PIB_ / populacao_;

    printf("CARTA DO JOGADOR\n");
   printf("Estado: %s\n", estado_);
   printf("Codigo: %s\n", codigo_);
   printf("Nome da cidade: %s\n", nomedacidade_);
   printf("População: %f\n", populacao_);
   printf("Área: %.1f\n", area_);
   printf("PIB: %.2f\n", PIB_);
   printf("Número de pontos turisticos: %d\n", numerodepontosturisticos_);
   printf("Densidade populacional: %f\n", resultadodensidade);
   printf("PIB per capita: %f\n", resultadoPPC);

    
    
    return 0;

}