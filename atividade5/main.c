#include <stdio.h>

int main(int argc, char* argv[]){

    int qtdAlunos = 0;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    float notas[qtdAlunos];

    for(int i = 0; i < qtdAlunos; i++){
        do{
            printf("\nDigite a nota do aluno %d: ", i);
            scanf("%f", &notas[i]);
        } while (notas[i] > 10.0 || notas[i] < 0.0);
        
    }

    int posicaoNota;

    printf("\nInforme a posicao da nota a ser apresentada: ");
    scanf("%d", &posicaoNota);

    float somaNotas = 0.0;
    float mediaNotas = 0.0;
    float menorNota = notas[0];
    float maiorNota = notas[0];
    int qtdAlunosAprovados = 0;
    for(int i = 0; i < qtdAlunos; i++){
        somaNotas += notas[i];

        if(menorNota > notas[i]){
            menorNota = notas[i];
        }

        if(maiorNota < notas[i]){
            maiorNota = notas[i];
        }

        if(notas[i] >= 6.0){
            qtdAlunosAprovados++;
        }

    }

    mediaNotas = somaNotas / qtdAlunos;
    printf("\nMedia das notas: %.2f", mediaNotas);
    printf("\nMenor nota: %.2f", menorNota);
    printf("\nMaior nota: %.2f", maiorNota);
    printf("\nQtd. alunos aprovados: %d", qtdAlunosAprovados);
    printf("\nNota do aluno %d: %.2f", posicaoNota, notas[posicaoNota]);


    return 0;
}