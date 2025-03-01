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

printf("digite a populacao: \n");
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


printf("Carta 02\n");
   char Estado2[20] = "Saopaulo";
   char Cidade2[20] = "Jandira";
   char codigodacarta2[20] = "A04";
   int populacao2 = 32500;
   float areaemkm2 = 24.300;
   float pib2 = 15.100;
   int numeropontosturisticos2 = 10;

   // Exibição das informações da carta 2

   
   printf("digite seu estado: \n");
   scanf("%s", Estado2);
   printf("o estado e: %s\n", Estado2);

printf("Digite o seu codigo da carta: \n");
scanf("%s", codigodacarta2);
printf("o codigo da carta e: %s\n", codigodacarta2);

printf("digite sua cidade: \n");
scanf("%s", Cidade2);
printf("sua cidade e: %s\n", Cidade2);

printf("Digite a populacao: \n");
scanf("%d", &populacao2);
printf("a populacao e: %d\n", populacao2);

printf("digite sua area \n");
scanf("%f", &areaemkm2);
printf("A area em km2 e: %f\n", areaemkm2);

printf("digite o pib: \n");
scanf("%f", &pib2);
printf("O pib e: %f\n", pib2);

printf("digite o numero de pontos turisticos: \n");
scanf("%d", &numeropontosturisticos2);
printf("Quantidade de pontos turisticos sao: %d\n", numeropontosturisticos2);

return 0;

}
