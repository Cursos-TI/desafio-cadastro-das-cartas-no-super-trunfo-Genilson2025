#include <stdio.h>



int main() {
       //inserindo variaveis de carta 1 e 2.

   char estado01[50] , estado02[50];
   char codigo01[50] , codigo02[50];
   char cidade01[50] , cidade02[50];
   unsigned long int populacao01 , populacao02;
   float pib01 , pib02;
   float area01 , area02;
   int pontosturisticos01 , pontosturisticos02 , Carta01venceu , carta02venceu;
   float densidadepopulacional1 , densidadepopulacional2 , pibpercapita01 , pibpercapita2;//Inserindo variaveis de nivel avenureiro.
   float superpoder01 , superpoder02;//Inserindo variavel de nivel mestre.
   int populacao , area , pib , pontosturisico , densidadepopulacional , pibpercapita , superpoder;
    

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
    scanf("%ld", &populacao02);
 
    printf("Área: ");
    scanf("%f" , &area02);
    
    printf("Pib: ");
    scanf("%f" , &pib02);
 
    printf("Numero de pontos turistico: ");
    scanf("%d" , &pontosturisticos02);
            
                 //Inserindo atividade nivel aventureiro.

    densidadepopulacional1 = (float) populacao01 / area01;//Inserindo equação para calcular densidade populacional.
    densidadepopulacional2 = (float)  populacao02 / area02;//Inserindo equação para calcular densidade populacional.
    pibpercapita01 = (float) pib01 / populacao01;//Inserindo equação para calcular Pib per Capita.
    pibpercapita2 = (float) pib02 / populacao02;//Inserindo equação para calcular Pib per Capita.
                //Inserindo equação de nivel mestre.
    superpoder01 = (float) populacao01 + area01 + pib01 + pontosturisticos01 + pibpercapita01 +(1 / densidadepopulacional1);
    superpoder02 = (float) populacao02 + area02 + pib02 + pontosturisticos02 + pibpercapita2 + (1 / densidadepopulacional2);


    

     //imprimindo carta de numero 01.

             printf("******Dados da carta 01******\n");

    printf("Carta01: \n Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n População: %ld\n Àrea: %f Km²\n Pib: %f bilhões de reais\n Pontos turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f\n Super Poder: %.2f\n"
       , estado01 , codigo01 , cidade01 , populacao01 , area01 , pib01 , pontosturisticos01 ,densidadepopulacional1 , pibpercapita01 , superpoder01);

             printf("******Dados da carta 02******\n");


    printf("Carta02: \n Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n População: %ld\n Àrea: %f Km²\nPib: %f bilhões de reais\n Pontos turisticos: %d\n Densidade Populacional: %.2f ha/km²\n PIB per Capita: %.2f\n Super Poder: %.2f\n"
       , estado02 , codigo02 , cidade02 , populacao02 , pontosturisticos02 , area02 , pib02 , pontosturisticos02 , densidadepopulacional2 , pibpercapita2 , superpoder02);

       //Exibindo os resultado das comparações.

       populacao = populacao01 > populacao02;
       area = area01 > area02;
       pib = pib01 > pib02;
       pontosturisico = pontosturisticos01 > pontosturisticos02;
       densidadepopulacional = densidadepopulacional2 > densidadepopulacional2;
       pibpercapita = pibpercapita01 > pibpercapita2;
       superpoder = superpoder01 < superpoder02;

       Carta01venceu = 1;
       Carta01venceu = 0;

      printf("*****Comparação de cartas*****\n");

      printf("População: %d\n" , populacao);
      printf("Area: %d\n" , area);
      printf("Pib: %d\n" , pib);
      printf("Pontos turisticos: %d\n" , pontosturisico);
      printf("Densidade populacional: %d\n" , densidadepopulacional);
      printf("Pib per Capita: %d\n" , pibpercapita);
      printf("Super Poder: %d\n" , superpoder);


      printf("****Resulado da comparação das cartas 1 e 2!****\n");

      printf("População: Carta 2 venceu (%d)\n" , populacao);
      printf("Area: carta 2 venceu (%d)\n" , area);
      printf("Pib: Carta 2 venceu (%d)\n" , pib);
      printf("Pontos turistico: Carta 1 venceu (%d)\n" , pontosturisico);
      printf("Densidade populacional: Carta 2 venceu (%d)\n" , densidadepopulacional);
      printf("Pib per capita: Carta 1 venceu (%d)\n" , pibpercapita);
      printf("Super Poder: Carta 1 venceu (%d)\n" , superpoder);


      return 0;

}
