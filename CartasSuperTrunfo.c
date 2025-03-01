#include <stdio.h>


/// @return 0;

int main () {

   printf("Bem vindo ao super trunfo!\n");
   printf("Carta 01\n");
   char Estado[20] = "Riodejaneiro";
   char Cidade[20] = "mangaratiba";
   char codigodacarta[20] = "A03";
   int populacao = 1210041;
   float areaemkm = 150.300;
   float pib = 20.200;
   int numeropontosturisticos = 300;

   // Exibição das informações da carta 1



   printf("digite seu estado: \n");
   scanf("%s", Estado);
   printf("o estado e: %s\n", Estado);

printf("Digite o seu codigo da carta: \n");
scanf("%s", codigodacarta);
printf("o codigo da carta e: %s\n", codigodacarta);

printf("digite sua cidade: \n");
scanf("%s", Cidade);
printf("sua cidade e: %s\n", Cidade);

printf("Digite a populacao: \n");
scanf("%d", &populacao);
printf("a populacao e: %d\n", populacao);

printf("digite sua area \n");
scanf("%f", &areaemkm);
printf("A area em km2 e: %f\n", areaemkm);

printf("digite o pib: \n");
scanf("%f", &pib);
printf("O pib e: %f\n", pib);

printf("digite o numero de pontos turisticos: \n");
scanf("%d", &numeropontosturisticos);
printf("Quantidade de pontos turisticos sao: %d\n", numeropontosturisticos);

}