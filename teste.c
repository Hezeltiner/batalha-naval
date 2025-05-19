#include <stdio.h>

#define LINHA  11
#define COLUNA  11

int main() {

    int matriz[LINHA][COLUNA];
    int target = 1;
    int found = 0;
    int soma = 1;
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        
        }
        printf("\n");
    }
    
    
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("Elemento %d encontrado na posiçao (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
            
        }
        

    }
    




    return 0;
}