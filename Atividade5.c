#include <stdio.h>
#include <stdlib.h>

int main(){


  float primeiroNumero, segundoNumero, terceiroNumero, quartoNumero, quintoNumero, sextoNumero,setimoNumero, oitavoNumero, nonoNumero, ultimoNumero;
  float media;
  
  printf("Digite o primeiro numero: ");
  scanf("%f",&primeiroNumero);
  
  printf("Digite o segundo numero: ");
  scanf("%f",&segundoNumero);

   printf("Digite o terceiro numero: ");
  scanf("%f",&terceiroNumero);
  
  printf("Digite o quarta numero: ");
  scanf("%f",&quartoNumero);
  
   printf("Digite o quinto numero: ");
  scanf("%f",&quintoNumero);
  
  printf("Digite o sexto numero: ");
  scanf("%f",&sextoNumero);

   printf("Digite o setimo numero: ");
  scanf("%f",&setimoNumero);

     printf("Digite o oitavo numero: ");
  scanf("%f",&oitavoNumero);
  
  printf("Digite o nono numero: ");
  scanf("%f",&nonoNumero);

    printf("Digite o decimo numero: ");
  scanf("%f",&ultimoNumero);
  
  media = (primeiroNumero + segundoNumero + terceiroNumero + quartoNumero + quintoNumero + sextoNumero + setimoNumero + oitavoNumero + nonoNumero + ultimoNumero) / 10;
  
  printf("A media dos numeros e de = %.2f\n",media);
  


  system("pause");
  return 0;

}