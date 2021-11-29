#include <stdio.h>
#include <stdlib.h>

int main(){

int dia;
int mes;
int ano;

printf("Digite o dia desejado: \n");
scanf("%d", &dia);

printf("Digite o mes desejado: \n");
scanf("%d", &mes);

printf("Digite o ano desejado: \n");
scanf("%d", &ano);


printf("Data no fomato AA-MM-DD: %d", ano); 
printf("-%d-", mes ); 
printf("%d", dia); 
printf("\n"); 

system("pause"); 
    return 0;


}