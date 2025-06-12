#include <stdio.h>
#include <stdlib.h>

typedef struct Ponto {
    int x;
    float y;
} Ponto;

int main (int argc, char* argv[]){

    int qtd_linhas = 0;
    int x, soma_x;
    float y, media_x, media_y, soma_y;
    Ponto *numeros;


    FILE *arq = fopen("dados_regressao.csv", "r");

    if(arq == NULL){
        printf("erro ao abrir arquivo.");
        return 1;
    }

    while (fscanf(arq, "%d,%f", &x, &y) != EOF)
    {
        qtd_linhas++;    
    } 
    
    numeros = malloc(sizeof(Ponto) * qtd_linhas);

    printf("qtd_linhas = %d\n", qtd_linhas);    
    
    if(numeros != NULL){
        int i = 0;
        fseek(arq, 0, SEEK_SET);
        soma_x = 0;
        soma_y = 0;
        while (fscanf(arq, "%d,%f", &x, &y) != EOF)
        {
            numeros[i].x = x;
            numeros[i].y = y;
            soma_x += x;
            soma_y += y;
            i++;    
        }
        media_x = soma_x / qtd_linhas;
        media_y = soma_y / qtd_linhas;
    }
    
    float inclinacao_dividendo = 0;
    float inclinacao_divisor = 0;
    for(int i = 0; i < qtd_linhas; i++){
        inclinacao_dividendo += (numeros[i].x - media_x) * (numeros[i].y - media_y);
        inclinacao_divisor += (numeros[i].x - media_x) * (numeros[i].x - media_x);  
    } 
    
    float a = inclinacao_dividendo / inclinacao_divisor;
    float b = media_y - (a*media_x);

    printf("%.2fx + %.2f", a, b);

    fclose(arq);

    return 0;
}