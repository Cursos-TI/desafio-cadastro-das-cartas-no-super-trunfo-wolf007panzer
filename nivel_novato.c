#include <stdio.h>
#include <string.h>

int main () {
printf("nivel novato\n");
printf("commit\n");

char estado_[20];
char codigo_ [20];
char nomedacidade_ [20];
int populacao_;
float area_;
float PIB_;
int numerodepontosturisticos_; 

char estado[20];
char codigo [20];
char nomedacidade [20];
int populacao;
float area;
float PIB;
int numerodepontosturisticos;


strcpy(estado, "Minas Gerais");
strcpy(codigo, "MG");
strcpy(nomedacidade, "Belo Horizonte");
populacao = 2.315560;
area = 331.4;
PIB = 140.1;
numerodepontosturisticos = 12;
printf("*** CARTA 1 ***\n");
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Area: %.1f\n", area);
printf("PIB: %.f\n", PIB);
printf("Número de pontos turisticos: %d\n", numerodepontosturisticos);


char estado2[20];
char codigo2 [20];
char nomedacidade2 [20];
int populacao2;
float area2;
float PIB2;
int numerodepontosturisticos2;


strcpy(estado2, "São Paulo");
strcpy(codigo2, "SP");
strcpy(nomedacidade2, "São Paulo");
populacao2 = 11.895578;
area2 = 1.521;
PIB2 = 699.6;
numerodepontosturisticos2 = 15;

printf("*** CARTA 2 ***");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("Area: %.3f\n", area2);
printf("PIB: %.f\n", PIB2);
printf("Número de pontos turisticos: %d\n", numerodepontosturisticos2);

printf("DIGITE AS INFORMACOES DA CARTA");

printf("Digite o estado: ");
scanf ("%s", estado_); 
printf ( "o estado e,%s\n", estado_);

printf("Digite o codigo: ");
scanf ("%s", codigo_); 
printf ( "o codigo e,%s\n", codigo_); 

printf("Digite o nome da cidade: ");
scanf ("%s", nomedacidade_);
printf ( "o nome da cidade e,%s\n", nomedacidade_);

printf("Digite a população: ");
scanf ("%d", &populacao_);
printf( "a população e,%d\n", populacao_);

printf("Digite a area: ");
scanf ("%f", &area_);
printf( "a área e,%.1f\n", area_); 

printf("Digite o PIB: ");
scanf ("%f", &PIB_);
printf( "o PIB e,%.2f\n", PIB_);


printf("Digite o número de pontos turisticos: ");
scanf ("%d", &numerodepontosturisticos_);
printf( "o número de pontos turisticos e,%d\n", numerodepontosturisticos_); 

printf("CARTA DO JOGADOR\n");
   printf("Estado: %s\n", estado_);
   printf("Codigo: %s\n", codigo_);
   printf("Nome da cidade: %s\n", nomedacidade_);
   printf("População: %d\n", populacao_);
   printf("Área: %.1f\n", area_);
   printf("PIB: %.2f\n", PIB_);
   printf("Número de pontos turisticos: %d\n", numerodepontosturisticos_);

return 0;

}
