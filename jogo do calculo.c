///Feito por:Lexy
//Discord:Lexy3138
//github.com/Small-Lexy


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

void main() {
    int numeroQuiz1, numeroQuiz2;
    int resultado;
    int pontuacao = 0;
    int questao1;
    int erro = 0;
    char reinicioJogo;
    char nomeUsuario[15];
    srand(time(NULL));


printf("+------------------------------------------------------+\n");
printf("|                   Jogo do calculo                    | \n");
printf("| Se errar duas vezes durante a partida o jogo acaba   | \n");
printf("|     O jogo tem contem 3 niveis de dificuldade        | \n");
printf("|                     Boa sorte!!                      | \n");
printf("+------------------------------------------------------+\n\n");

printf("Digite o seu nome: ", nomeUsuario);
        scanf("%s", nomeUsuario);


inicioJogo:

for(questao1 = 1; questao1 <= 10; questao1++){


    for(numeroQuiz1 = 0; numeroQuiz1 < 1; numeroQuiz1++)
        numeroQuiz1 = 1 + rand() % 9;

    for(numeroQuiz2 = 0; numeroQuiz2 < 1; numeroQuiz2++)
        numeroQuiz2 = 1 + rand() % 9;

            printf("%d * %d = ", numeroQuiz1, numeroQuiz2);
            scanf("%d", &resultado);


    if((numeroQuiz1 * numeroQuiz2) == resultado){
        pontuacao = pontuacao + 5;
        }

    if ((numeroQuiz1 * numeroQuiz2) != resultado){
      erro ++;
      }

   if (erro >= 2){
       erro = 0;
            printf("Voce perdeu, reiniciar jogo?(s/n)  ");
                scanf("%s", &reinicioJogo);
            printf("O seu placar foi de: %d pontos\n", pontuacao);
        pontuacao = 0;    
                
    if (reinicioJogo == 's'){
        goto inicioJogo;
            } 
            else if (reinicioJogo == 'n') {
            printf ("obrigado por jogar\n");
            system("pause"); 
            return 0;
                } 
                else{
                    printf("resposta invalida\n");
                        goto reinicioJogo2;
                        }
                }     

}

printf("Placar atual: %d\n", pontuacao);


for(questao1 = 1; questao1 <= 10; questao1++){

    for(numeroQuiz1 = 0; numeroQuiz1 < 1; numeroQuiz1++)
        numeroQuiz1 = 1 + rand() % 9;

    for(numeroQuiz2 = 0; numeroQuiz2 < 1; numeroQuiz2++)
        numeroQuiz2 = 11 + rand() % 99;

            printf("%d * %d = ", numeroQuiz1, numeroQuiz2);
            scanf("%d", &resultado);


        if((numeroQuiz1 * numeroQuiz2) == resultado){
        pontuacao = pontuacao + 15;
        }

   if ((numeroQuiz1 * numeroQuiz2) != resultado) {
      erro ++;
      }

   if (erro >= 2){
       erro = 0;
            printf("Voce perdeu, reiniciar jogo?(s/n)  ");
                scanf("%s", &reinicioJogo);
            printf("O seu placar foi de: %d pontos\n", pontuacao);
        pontuacao = 0;

    if (reinicioJogo == 's'){
        goto inicioJogo;
            } 
            else if (reinicioJogo == 'n') {
            printf ("obrigado por jogar\n");
            system("pause"); 
            return 0;
                } 
                else{
                    printf("resposta invalida\n");
                        goto reinicioJogo2;
                        }
                }     
}

printf("Placar atual: %d\n", pontuacao);

for(questao1 = 1; questao1 <= 10; questao1++){

    for(numeroQuiz1 = 0; numeroQuiz1 < 1; numeroQuiz1++)
        numeroQuiz1 = 1 + rand() % 9;

    for(numeroQuiz2 = 0; numeroQuiz2 < 1; numeroQuiz2++)
        numeroQuiz2 = 100 + rand() % 999;

            printf("%d * %d = ", numeroQuiz1, numeroQuiz2);
            scanf("%d", &resultado);


        if((numeroQuiz1 * numeroQuiz2) == resultado){
        pontuacao = pontuacao + 20;
        }
    
   if ((numeroQuiz1 * numeroQuiz2) != resultado) {
      erro ++;
      }

   if (erro >= 2){
       erro = 0;
            printf("Voce perdeu, reiniciar jogo?(s/n)  ");
                scanf("%s", &reinicioJogo);
            printf("O seu placar foi de: %d pontos\n", pontuacao);
        pontuacao = 0;

    if (reinicioJogo == 's'){
        goto inicioJogo;
            } 
            else if (reinicioJogo == 'n') {
            printf ("obrigado por jogar\n");
            system("pause"); 
            return 0;
                } 
                else{
                    printf("resposta invalida\n");
                        goto reinicioJogo2;
                        }
                }        
}

printf("\n");
printf("+-----------------------------------------------+\n");
printf("|O jogo acabou, o placar final foi de: %d pontos| \n", pontuacao);
printf("+-----------------------------------------------+\n\n\n");



reinicioJogo2:

printf("reiniciar o jogo? (s/n): ");
    scanf("%s", &reinicioJogo);

    if (reinicioJogo == 's'){
        pontuacao = 0;
        erro = 0;
        goto inicioJogo;
            } 
            else if (reinicioJogo == 'n') {
            printf ("obrigado por jogar\n");
            system("pause"); 
            return 0; 
                } 
                else{
                    printf("resposta invalida\n");
                        goto reinicioJogo2;
                        }


    return 0;

}