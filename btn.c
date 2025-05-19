#include <stdio.h>

int main() {

    int index;

    char * nomesalunos [3][3]= {
        {"aluno 0", "pt: 30", "mat: 90", },
        {"aluno 1", "pt: 70", "mat: 70", },
        {"aluno 2", "pt: 90", "mat: 60", }  
    };

    printf("Digite o numero do aluno que voce quer ver a nota... \n");
    printf("Para aluno 1 = 0\n");
    printf("Para aluno 2 = 1\n");
    printf("Para aluno 3 = 2\n");
    
    scanf("%d", &index);

    printf("A nota do %s sao %s, %s...\n", nomesalunos[index][0], nomesalunos[index][1], nomesalunos[index][2]);

    return 0;
}