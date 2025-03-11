#include <stdio.h>



int main() {
       //inserindo variaveis de carta 1 e 2.

   char estado01[50] , estado02[50];
   char codigo01[50] , codigo02[50];
   char cidade01[50] , cidade02[50];
   int populacao01 , populacao02;
   float pib01 , pib02; densidadepopulacional01 , densidade populacional02;
   float area01 , area02 , pibpercapita01 , pibpercapita02;
   int pontosturisticos01 , pontosturisticos02;

     //solicitar informações de carta de numero 1.
       
   printf("Digite as infomações da carta 01 \nEstado: ");
   scanf("%s", estado01);

   printf("Código da carta: ");
   scanf(" %s" , codigo01);

   printf("Nome da cidade: ");
   scanf("%s" , cidade01);

   printf("População: ");
   scanf("%d", &populacao01);

   printf("Área: ");
   scanf("%f" , &area01);

   printf("Pib: ");
   scanf("%f" , &pib01);

   printf("Numero de pontos turistico: ");
   scanf("%d" , &pontosturisticos01);

    //solicitar informações de carta de numero 02.

    printf("Digite as infomações da carta 02 \nEstado: ");
    scanf(" %s", estado02);
 
    printf("Código da carta: ");
    scanf(" %s" , codigo02);
 
    printf("Nome da cidade: ");
    scanf("%s" , cidade02);
 
    printf("População: ");
    scanf("%d", &populacao02);
 
    printf("Área: ");
    scanf("%f" , &area02);
 
    printf("Pib: ");
    scanf("%f" , &pib02);
 
    printf("Numero de pontos turistico: ");
    scanf("%d" , &pontosturisticos02);

       densidadepopulacional01 = (float) populacao01 / area01;
       pibpercapita01 = (float) pib01 / populacao01;
       densidadepopulacional02 = (float) populacao02 / area02;
       pibpercapita02 = (float) pib02 / populacao02;
       
  

     //imprimindo carta de numero 01 e 02.

    printf("Carta01: \n Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n Àrea: %f Km\n Pib: %f bilhões de reais\n Pontos turisticos: %d\n" , estado01 , codigo01 , cidade01 , populacao01 , area01 , pib01 , pontosturisticos01 );


    printf("Carta02: \n Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n Àrea: %f Km\n Pib: %f bilhões de reais\n Pontos turisticos: %d\n" , estado02 , codigo02 , cidade02 , pontosturisticos02 , area02 , pib02 , pontosturisticos02);

return 0;

}
