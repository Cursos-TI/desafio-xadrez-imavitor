#include <stdio.h>
    int main (){
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
        printf("Torre\n");
        for (int r = 1; r <=8; r++){
            printf("Esquerda\n");
    
        }
        return 0;
    }