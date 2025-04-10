#include <stdio.h>

int main(int argc, char* argv[]){

    int opcao;

    do{
        printf("Escolha o tipo de filme:\n");
        printf("0 - Leve\n1 - Intenso\n");
        scanf("%d", &opcao);

        if(opcao == 0){
            printf("Filme LEVE\n");
            printf("Escolha um genero:\n");
            printf("0 - Comedia\n1 - Animacao\n");
            scanf("%d", &opcao);
            if(opcao == 0){
                printf("Assistir ao filme: As branquelas\n");
            }
            else if(opcao == 1){
                printf("Assistir ao filme: Toy Story\n");
            }
            else{
                printf("Opcao indisponivel\n");    
            }
        }
        else if(opcao == 1){
            printf("Filme INTENSO\n");
            printf("Escolha um genero:\n");
            printf("0 - Terror\n1 - Acao\n");
            scanf("%d", &opcao);
            if(opcao == 0){
                printf("Genero TERROR\n");
                printf("Escolha o tipo:\n");
                printf("0 - Terror psicologico\n1 - Terror sobrenatural\n");
                scanf("%d", &opcao);
                if(opcao == 0){
                    printf("Assistir ao filme: Corra!\n");
                }
                else if(opcao == 1){
                    printf("Assistir ao filme: invocacao do mal\n");
                }
                else{
                    printf("Opcao indisponivel\n");     
                }
            }
            else if(opcao == 1){
                printf("Genero ACAO\n");
                printf("Escolha o tipo:\n");
                printf("0 - Super-herois\n1 - Aventura realista\n");
                scanf("%d", &opcao);
                if(opcao == 0){
                    printf("Assistir ao filme: Vingadores Ultimato\n");
                }
                else if(opcao == 1){
                    printf("Assistir ao filme: Mad Max Estrada da Furia\n");
                }
                else{
                    printf("Opcao indisponivel\n");     
                }
            }
            else{
                printf("Opcao indisponivel\n");    
            }
        }
        else{
            printf("Opcao indisponivel\n");
        }
        printf("Deseja escolher novo filme?\n");
        printf("0 - Sim\n1 - Nao\n");
        scanf("%d", &opcao);
    } while (opcao == 0);
    
    //
    return 0;
}