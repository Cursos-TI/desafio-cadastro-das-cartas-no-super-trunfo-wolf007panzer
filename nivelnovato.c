#include <stdio.h>
#include <string.h>

int main () {
printf("nivel novato\n");
printf("commit\n");

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
numerodepontosturisticos = 10;

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
numerodepontosturisticos2 = 10;

printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("Area: %.3f\n", area2);
printf("PIB: %.f\n", PIB2);
printf("Número de pontos turisticos: %d\n", numerodepontosturisticos2);

printf("Digite o estado: ");
scanf ("%s", estado); 

printf("Digite o codigo: ");
scanf ("%s", codigo); 

printf("Digite o nome da cidade: ");
scanf ("%s", nomedacidade);

printf("Digite a população: ");
scanf ("%d", &populacao);

printf("Digite a area: ");
scanf ("%f", &area);

printf("Digite o PIB: ");
scanf ("%f", &PIB);

printf("Digite o número de pontos turisticos: ");
scanf ("%d", &numerodepontosturisticos);

printf("Digite o estado: ");
scanf ("%s", estado2); 

printf("Digite o codigo: ");
scanf ("%s", codigo2);

printf("Digite o nome da cidade: ");
scanf ("%s", nomedacidade2); 

printf("Digite a população: ");
scanf ("%d", &populacao2);

printf("Digite a area: ");
scanf ("%f", &area2);

printf("Digite o PIB: ");
scanf ("%f", &PIB2);

printf("Digite o número de pontos turisticos: ");
scanf ("%d", &numerodepontosturisticos2);

return 0;

}
