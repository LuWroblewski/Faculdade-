#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	float temperatura;
	char tipoT;
	
	printf ("Digite o valor a ser convertido:\n");
	     scanf ("%f", &temperatura);
	 
	printf ("Converter para graus Celsius (C) ou para graus Fahrenheit (F) ?\n");
	     scanf (" %c", &tipoT);

	switch(tipoT){
		case 'C':
				printf ("Temperatura convertida: %2.f\n", (5 * temperatura - 160  / 9));
		 break;
		case 'F': 
				printf ("Temperatura convertida: %2.f\n", (9 * temperatura + 160  / 5)); 
		 break;

		default: printf("Opcao invalida tente novamente\n");
			break;	 
	}         

    system("pause");
    return 0;
}




