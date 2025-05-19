#include <stdio.h>

void RecursivoTorre(int torre){

    if (torre > 0)
    {
        RecursivoTorre(torre - 1);
        printf("%d\n", torre);
    }

}
void RecursivoRainha(int rainha){

    if (rainha > 0)
    {
       RecursivoRainha(rainha - 1);
       printf("%d\n", rainha);
    }
}
    void RecursivoBispo(int bispo){

        if (bispo > 0)
        {
            
            for (int direita = 0; direita <= 3; direita++)
            {
                printf("a direita\n", direita);
                for (int cima = 0; cima <= 0; cima++)
                {
                    printf("a cima\n", cima);
                }
        }
        }
    }
        
    void RecursivoCavalo(int cavalo){

        if (cavalo > 0)
        {
            for (int direita = 0; direita <= 0; direita++)
            {
                printf("cavalo andou a direita\n", direita);
                for (int cima = 0; cima <= 1; cima++)
                {
                    printf("cavalo andou para cima\n", cima);
                }
                
            }    


        }

    }



int main() {
    
    int casasTorre = 5; 
    int casasBispo = 5; 
    int casasRainha = 8;
    int casasCavalo = 1;
    int opcao;
    printf("escolha 1 peça...\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. rainha\n");
    printf("4. cavalo\n");
    scanf("%d", &opcao);
    switch (opcao){
        
        case 1: {
            int casasTorre = 5;
            printf("a torre andou a direita:\n");
            RecursivoTorre(casasTorre);
        break;
        }
        case 2: {
            int casasBispo = 5;
            printf("o Bispo andou a:\n");
            RecursivoBispo(casasBispo);
        break;
        }
        case 3:{
            int casasRainha = 6;
            printf("a rainha andou a esquerda:\n");
            RecursivoRainha(casasRainha);
        break;
        }
        case 4: {
            int casasCavalo = 1;
            printf("o cavalo andou a :\n");
            RecursivoCavalo(casasCavalo);
        break;
        }
        
    }
  return 0;
}