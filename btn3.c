#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Cria o tabuleiro 10x10 com água (0)

    // Posição inicial dos navios (definida no código)
    int LinhaHorizontal = 2;
    int ColunaHorizontal = 3;
    int LinhaVertical = 5;
    int ColunaVertical = 7;

    // Coloca navio horizontal (tamanho 3)
    tabuleiro[LinhaHorizontal][ColunaHorizontal] = 3;
    tabuleiro[LinhaHorizontal][ColunaHorizontal + 1] = 3;
    tabuleiro[LinhaHorizontal][ColunaHorizontal + 2] = 3;

    // Coloca navio vertical (tamanho 3)
    tabuleiro[LinhaVertical][ColunaVertical] = 3;
    tabuleiro[LinhaVertical + 1][ColunaVertical] = 3;
    tabuleiro[LinhaVertical + 2][ColunaVertical] = 3;

    // Mostra o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
