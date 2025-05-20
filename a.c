#include <stdio.h>
#include <stdlib.h>
#define linhas 10
#define colunas 10
#define tam_habilidade 5

void aplicarhabilidade(int Tabuleiro[linhas][colunas], int habilidade[tam_habilidade][tam_habilidade], 
int origem_linha, int origem_coluna){
    int offset = tam_habilidade / 2;
    for (int i = 0; i < tam_habilidade; i++) {   
        for (int j = 0; j < tam_habilidade; j++) {
            int linhaTabuleiro = origem_linha - offset + i;
            int colunaTabuleiro = origem_coluna - offset +j;
            
            if (linhaTabuleiro >= 0 && linhaTabuleiro < linhas && colunaTabuleiro >= 0 
                && colunaTabuleiro < colunas) { 
                if (habilidade[i][j] == 1 && Tabuleiro[linhaTabuleiro][colunaTabuleiro] == 0)
            
                    {
                    Tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
                    }
                }
            }
        }
    }

    void construirCone(int matriz[tam_habilidade][tam_habilidade]) {
    for (int i = 0; i < tam_habilidade; i++) {
        for (int j = 0; j < tam_habilidade; j++) {
            if (j >= (tam_habilidade / 2 - i) && j <= (tam_habilidade / 2 + i)) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void construirCruz(int matriz[tam_habilidade][tam_habilidade]) {
    for (int i = 0; i < tam_habilidade; i++) {
        for (int j = 0; j < tam_habilidade; j++) {
            if (i == tam_habilidade / 2 || j == tam_habilidade / 2) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void construirOctaedro(int matriz[tam_habilidade][tam_habilidade]) {
    for (int i = 0; i < tam_habilidade; i++) {
        for (int j = 0; j < tam_habilidade; j++) {
            if (abs(i - tam_habilidade / 2) + abs(j - tam_habilidade / 2) <= tam_habilidade / 2) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void imprimirTabuleiro(int tabuleiro[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}



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
    Tabuleiro[LinhaHorizontal1][Coluna1 + 2] = 3;

    Tabuleiro[LinhaHorizontal2][coluna2] = 2;
    Tabuleiro[LinhaHorizontal2][coluna2 + 1] = 2;

    Tabuleiro[LinhaHorizontal3][coluna3] = 1;
    Tabuleiro[LinhaHorizontal3][coluna3 + 1] = 1;

    Tabuleiro[LinhaHorizontal4][coluna4] = 4;
    Tabuleiro[LinhaHorizontal4][coluna4 + 1] = 4;
    Tabuleiro[LinhaHorizontal4][coluna4 + 2] = 4;

    int cone[tam_habilidade][tam_habilidade];
    int cruz[tam_habilidade][tam_habilidade];
    int octaedro[tam_habilidade][tam_habilidade];

    construirCone(cone);
    construirCruz(cruz);
    construirOctaedro(octaedro);

    aplicarhabilidade(Tabuleiro, cone, 3, 3);   
    aplicarhabilidade(Tabuleiro, cruz, 6, 6);  
    aplicarhabilidade(Tabuleiro, octaedro, 1, 8);  

    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d  ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
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
