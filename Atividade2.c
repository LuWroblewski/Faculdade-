#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");
int Base;
int Lado1;
int Lado2;

while(Base <= 0 || Lado1 <=0|| Lado2 <= 0){

printf("Digite o valor base do triangulo: \n");
scanf("%d", &Base);

printf("Digite o valor Lado1 do triangulo: \n");
scanf("%d", &Lado1);

printf("Digite o valor Lado2 do triangulo: \n");
scanf("%d", &Lado2);

        if(Base <= 0 || Lado1 <=0|| Lado2 <= 0){
        printf("Isso nao e um triangulo, tente novamente\n");
         }
}

        if (Base == Lado1 && Lado1 == Lado2 && Lado2 == Base ){
            printf("Triangulo equilatero\n");
        }
        if (Base != Lado1 && Lado1 != Lado2  && Base != Lado2 ){
            printf("Triangulo Escaleno\n");
        }
        if(Base != Lado1 && Lado1 == Lado2 && Lado2 != Base  ){
        printf("triangulo isosceles\n");
        }
                else if(Base == Lado1 && Lado1 != Lado2  && Base != Lado2){
                    printf("triangulo isosceles\n");
                }
                 else if(Base != Lado1 && Lado1 != Lado2  && Base == Lado2){
                    printf("triangulo isosceles\n");
                 }
    

 system("pause"); 
    return 0;
}




.
