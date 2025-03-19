#include <stdio.h>
#include <string.h>

int main () {
printf("nivel novato\n");
printf("commit\n");

char estado[20];
char codigo [20];
char nomedacidade [20];
int populaçao;
float area;
float PIB;
int numerodepontosturisticos;


strcpy(estado, "Minas Gerais");
strcpy(codigo, "MG");
strcpy(nomedacidade, "Belo Horizonte");
populaçao = 2523794;
area = 331.401;
PIB = 140.1;
numerodepontosturisticos = 10;

printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populaçao);
printf("Area: %.2f\n", area);
printf("PIB: %.f\n", PIB);
printf("Número de pontos turisticos: %d\n", numerodepontosturisticos);


char estado2[20];
char codigo2 [20];
char nomedacidade2 [20];
int populaçao2;
float area2;
float PIB2;
int numerodepontosturisticos2;


strcpy(estado2, "São Paulo");
strcpy(codigo2, "SP");
strcpy(nomedacidade2, "São Paulo");
populaçao2 = 12106920;
area2 = 1521.11;
PIB2 = 699.6;
numerodepontosturisticos2 = 10;

printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("População: %d\n", populaçao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.f\n", PIB2);
printf("Número de pontos turisticos: %d\n", numerodepontosturisticos2);

printf("Digite o estado: ");
scanf ("%s", estado); 
printf ( "o estado e,%s\n", estado);

printf("Digite o codigo: ");
scanf ("%s", codigo); 
printf ( "o codigo e,%s\n", codigo);

printf("Digite o nome da cidade: ");
scanf ("%s", nomedacidade); 
printf ( "o nome da cidade e,%s\n", nomedacidade);

printf("Digite a população: ");
scanf ("%d", &populaçao);
printf ( "a população e,%d\n", populaçao);

printf("Digite a area: ");
scanf ("%f", &area);
printf ( "a área e,%.2f\n", area);

printf("Digite o PIB: ");
scanf ("%f", &PIB);
printf ( "o PIB e,%.f\n", PIB);

printf("Digite o número de pontos turisticos: ");
scanf ("%d", &númerodepontosturisticos);
printf ( "o número de pontos turisticos e,%d\n", numerodepontosturisticos);

printf("Digite o estado: ");
scanf ("%s", estado2); 
printf ( "o estado e,%s\n", estado2);

printf("Digite o codigo: ");
scanf ("%s", codigo2); 
printf ( "o codigo e,%s\n", codigo2);

printf("Digite o nome da cidade: ");
scanf ("%s", nomedacidade2); 
printf ( "o nome da cidade e,%s\n", nomedacidade2);

printf("Digite a população: ");
scanf ("%d", &populaçao2);
printf ( "a população e,%d\n", populaçao2);

printf("Digite a area: ");
scanf ("%f", &area2);
printf ( "a área e,%.2f\n", area2);

printf("Digite o PIB: ");
scanf ("%f", &PIB2);
printf ( "o PIB e,%.f\n", PIB2);

printf("Digite o número de pontos turisticos: ");
scanf ("%d", &numerodepontosturisticos2);
printf ( "o número de pontos turisticos e,%d\n", numerodepontosturisticos2);

return 0;

}
