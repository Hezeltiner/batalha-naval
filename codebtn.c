#include <stdio.h>

#define linhas 10
#define colunas 10

int main(){

    int Tabuleiro[linhas][colunas] = {0};

    int LinhaHorizontal1 = 3;
    int LinhaHorizontal2 = 5;
    int Coluna1 = 0;
    int coluna2 = 7;
    int LinhaHorizontal3 = 4;
    int coluna3 = 8;
    int LinhaHorizontal4 = 2;
    int coluna4 = 4;
    
    int target = 3;
    int found = 0;
    
    

    Tabuleiro[LinhaHorizontal1][Coluna1] = 3;
    Tabuleiro[LinhaHorizontal1][Coluna1 + 1] = 3;
    Tabuleiro[LinhaHorizontal1][Coluna1 + 2] =  3;

    Tabuleiro[LinhaHorizontal2][coluna2] = 2;
    Tabuleiro[LinhaHorizontal2][coluna2 + 1] = 2;

    Tabuleiro[LinhaHorizontal3][coluna3] = 1;
    Tabuleiro[LinhaHorizontal3][coluna3 + 1] = 1;
    

    Tabuleiro[LinhaHorizontal4][coluna4] = 4;
    Tabuleiro[LinhaHorizontal4][coluna4 + 1] = 4;
    Tabuleiro[LinhaHorizontal4][coluna4 + 2] =  4;
    

    for (int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d  ", Tabuleiro[i][j]);
        }
        printf("\n");
    }
   
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            if (Tabuleiro[i][j] == target) {
                printf("O alvo %d foi atingido nas casas (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
     if (found) break;
    }
    


    return 0;
}