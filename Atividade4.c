#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

main(void) {
    
    setlocale(LC_ALL,"Portuguese");
    int conjuntoNota100, conjuntoNota10, conjuntoNota1;
    int conta;
    int pagamento; 
    int troco;


    printf ("Escreva o valor da conta:R$ \n");
            scanf ("%d",&conta);

while (conta > pagamento) {

    printf("Escreva o valor que foi o pagamento : R$ \n");
    scanf("%d", &pagamento);
    
    if (conta > pagamento) {
        printf("Por favor refaca o pagamento \n");
    }
}
        troco = (pagamento - conta);
        
 	conjuntoNota100  = troco / 100;
	conjuntoNota10  = (troco - (conjuntoNota100 * 100)) / 10; 
        conjuntoNota1 = troco - ( conjuntoNota100 * 100 + conjuntoNota10 * 10);

        printf ("o valor do troco e de:R$ %d\n", troco);
    	printf("Notas de 100: %d \n",conjuntoNota100);
		printf("Notas de 10: %d\n",conjuntoNota10);
		printf("Notas de 1: %d\n",conjuntoNota1);



system("pause");
return 0;


}


