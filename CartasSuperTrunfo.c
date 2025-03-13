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
   float densidadepopulacional = populacao / areaemkm;
   float pibpercapita = pib / populacao; 
   float superpoder;

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

printf("A densidade populacional é: %.2f habitantes por km²\n", densidadepopulacional);

printf("O pib per capita é: %2.f\n", pibpercapita);

superpoder = (float)populacao + areaemkm + pib + numeropontosturisticos + (1 / densidadepopulacional) + pibpercapita;
printf("O super poder é: %.2f\n", superpoder);

printf("Carta 02\n");
   char Estado2[20] = "Saopaulo";
   char Cidade2[20] = "Jandira";
   char codigodacarta2[20] = "A04";
   int populacao2 = 32500;
   float areaemkm2 = 24.300;
   float pib2 = 15.100;
   int numeropontosturisticos2 = 10;
   float densidadepopulacional2 = populacao2 / areaemkm2;
   float pibpercapita2 = pib2 / populacao2; 
   float superpoder2;


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

printf("A densidade populacional é: %.2f habitantes por km²\n", densidadepopulacional2);

printf("O pib per capita é: %2.f\n", pibpercapita2);

superpoder2 = (float)populacao2 + areaemkm2 + pib2 + numeropontosturisticos2 + (1 / densidadepopulacional2) + pibpercapita2;
   printf("O super poder é: %.2f\n", superpoder2);

// Comparação dos atributos

printf("\nComparação de cartas:\n");

// Comparação de população 

printf("populacao: Carta 01 venceu (%d)\n", (populacao > populacao2) ? 1 : 0);

// Comparação de área 

printf("area: Carta 01 venceu (%d)\n", (areaemkm > areaemkm2) ? 1 : 0);

// Comparação de pib 

printf("pib: Carta 01 venceu (%d)\n", (pib > pib2) ? 1 : 0);

// Comparação de pontos turisticos 

printf("pontosturisticos: Carta 01 venceu (%d)\n", (numeropontosturisticos > numeropontosturisticos2) ? 1 : 0);

// Comparação de densidade populacional 

printf("densidadepopulacional: Carta 01 venceu (%d)\n", (densidadepopulacional > densidadepopulacional2) ? 1 : 0);

// Comparação de pib per capita

printf("pibpercapita: Carta 01 venceu (%d)\n", (pibpercapita > pibpercapita2) ? 1 : 0);

// Comparação de super poder 

printf("superpoder: Carta 01 venceu (%d)\n", (superpoder > superpoder2) ? 1 : 0);

// Carta 01 é a grande vencedora.

return 0;

}