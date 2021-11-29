#include <stdio.h>
#include <stdlib.h>

void main(){

int primeiroValor, segundoValor, terceiroValor;
int primeiroFatorial, segundoFatorial, terceiroFatorial;
int primeiroFibonacci, segundoFibonacci, terceiroFibonacci;
int rodaFor,rodaFibonacci1, rodaFibonacci2;


while(primeiroValor <= 0 || segundoValor <=0|| terceiroValor <= 0){

printf("Digite o primeiro valor: \n");
scanf("%d", &primeiroValor);

printf("Digite o segundo valor: \n");
scanf("%d", &segundoValor);

printf("Digite o terceiro valor: \n");
scanf("%d", &terceiroValor);

        if(primeiroValor <= 0 || segundoValor <=0|| terceiroValor <= 0){
        printf("Por gentileza use apenas numeros positivos\n");
         }
}

primeiroFatorial = primeiroValor;
segundoFatorial = segundoValor;
terceiroFatorial = terceiroValor;

for(rodaFor = primeiroValor-1;rodaFor>=1;rodaFor--){
    primeiroFatorial *= rodaFor;

}

for(rodaFor = segundoValor-1;rodaFor>=1;rodaFor--){
    segundoFatorial *= rodaFor;

}

for(rodaFor = terceiroValor-1;rodaFor>=1;rodaFor--){
    terceiroFatorial *= rodaFor;

}

rodaFibonacci1 =1;
rodaFibonacci2 =1;

for(rodaFor = 3; rodaFor < primeiroValor; rodaFor++){
        primeiroFibonacci = rodaFibonacci1 + rodaFibonacci2;
        rodaFibonacci1 = rodaFibonacci2;
        rodaFibonacci2 = primeiroFibonacci;

}
rodaFibonacci1 =1;
rodaFibonacci2 =1;

for(rodaFor = 3; rodaFor < segundoValor; rodaFor++){
        segundoFibonacci = rodaFibonacci1 + rodaFibonacci2;
        rodaFibonacci1 = rodaFibonacci2; 
        rodaFibonacci2 = segundoFibonacci;

}
rodaFibonacci1 =1;
rodaFibonacci2 =1;

for(rodaFor = 3; rodaFor < terceiroValor; rodaFor++){
        terceiroFibonacci = rodaFibonacci1 + rodaFibonacci2;
        rodaFibonacci1 = rodaFibonacci2;
        rodaFibonacci2 = terceiroFibonacci;

}

printf("+---------+-------------+----------+\n");
printf("| Numero  |  Fatorial   | Fibonacci|\n");
printf("|   %6d|", primeiroValor);
printf("    %6d|", primeiroFatorial);
printf("    %6d|", primeiroFibonacci);
printf("\n|   %6d|", segundoValor);
printf("    %6d|", segundoFatorial);
printf("    %6d|", segundoFibonacci);
printf("\n|   %6d|", terceiroValor);
printf("    %6d|", terceiroFatorial);
printf("    %6d|\n", terceiroFibonacci);
printf("+---------+-------------+----------+\n");



 system("pause"); 
    return 0;

}
