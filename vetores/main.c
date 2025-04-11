#include <stdio.h>

int main(int argc, char* argv[]){
    
    int qtdAlunos;

    printf("Informe a quantidade de alunos: \n");
    scanf("%d", &qtdAlunos);

    float notas[qtdAlunos];

    for(int i = 0; i < qtdAlunos; i++){
        printf("\nDigite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i < qtdAlunos; i++){
        printf("\nNota do aluno %d: %.2f", i, notas[i]);
    }

    return 0;
}