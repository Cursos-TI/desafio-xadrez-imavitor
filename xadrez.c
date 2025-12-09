#include <stdio.h>
        //recursividade para o movimento da Torre em 5 casas para a direita
        void moverTorre(int t) {
            for (int t = 1; t <=5; t++){
                printf("Direita\n");
            }
        }
        //recursividade para o movimento do Bispo em 5 casas para cima e 5 para a direita intercalando
        void moverBispo(int b) {
                for (int b = 1; b <=5; b++){// loop do movimento do bispo na vertical
                    printf("Cima\n");
                    for (int b2 = 1; b2 <=5; b2++){ // loop do movimento do bispo na horizontal, quando b é igual a b2 o código entende que está na hora de mostrar o movimento da horizontal
                        if (b2==b){
                            printf("Direita\n");
                    }
                    }
            }
        }
        //recursividade para o movimento da rainha em 8 casas para a esquerda
        void moverRainha(int r) {
            for (int r = 1; r <=8; r++){
                printf("Esquerda\n");
                    }
            }
        //recursividade para o movimento do Cavalo duas casas pra cima e uma para a direita sem intercalar
        void moverCavalo(int c) {
            int i = 0;
            for (int c = 1; c <=2; c++){
                i++; //contador para o movimento da direita
                printf("Cima\n");
            }
            if (i=2){
                printf("Direita\n");
            }
            
        }
        int main (){ //exibindo o movimento das peças e chamando a função recursiva
            printf("Movimento da Torre: \n");
            moverTorre(1);
            printf("Movimento do Bispo: \n");
            moverBispo(1);
            printf("Movimento do Rainha: \n");
            moverRainha(1);
            printf("\n");//mantendo a linha em branco para o cavalo
            printf("Movimento do Cavalo: \n");
            moverCavalo(1);
            return 0;
    }