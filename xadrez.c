#include <stdio.h>
    int main (){
        int c1=1; //variável para o movimento do cavalo

        //movimento da Torre em 5 casas para a direita
        printf("Torre\n");
        for (int t = 1; t <=5; t++){
            printf("Direita\n");
        }
        //movimento do Bispo em 5 casas para a direita
        printf("Bispo\n");
        for (int b = 1; b <=5; b++){
            printf("Cima\n");
            printf("Direita\n");
        }
        //movimento da Rainha em 8 casas para a esquerda
        printf("Rainha\n");
        for (int r = 1; r <=8; r++){
            printf("Esquerda\n");
        }
        printf("\n"); //linha em branco para o movimento do cavalo
        printf("Cavalo\n");
        //implementando o código do movimento do cavalo
        while(c1--){ //decremento do parâmetro c1 para o while imprimir esquerda uma vez
            for (int c2 = 0; c2 < 2; c2++){
                printf("Baixo\n");//imprime baixo duas vezes
            }
            printf("Esquerda");//imprime esquerda uma vez
            
        }

        return 0;
    }