#include <stdio.h>
#include <string.h>

#define TAM 255

int main(int argc, char* argv[]){
    
    // Declaração de strings
    char palavra1[] = "Conhecimento";
    char palavra2[] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'}; 
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);

    printf("plalavra2[4] = %c\n", palavra2[4]);

    // Leitura SEGURA de strings
    printf("Digite uma frase: ");
    fgets(frase1, TAM, stdin);

    printf("%s\n", frase1);


    printf("Digite uma palavra: ");
    fflush(stdin);
    fgets(palavra3, TAM, stdin);

    printf("Digite outra palavra: ");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);

    if(strcmp(palavra3, palavra4) == 0){
        printf("As palavras sao iguais\n");
    }
    else{
        printf("As palavras NAO sao iguais\n");
    }

    printf("Tamanho da palavra3 eh: %d", strlen(palavra3));

    for(int i = 0; i < strlen(palavra3); i++){
        printf("\n%c", palavra3[i]);
    }

    //IMPRIME A PALAVRA 3 AO CONTRÁRIO
    for(int i = strlen(palavra3)-1; i >= 0; i--){
        printf("\n%c", palavra3[i]);
    }

    // Concatena palavra3 e palavra4
    strcat(palavra3, palavra4);
    printf("Palavra 3 concatenada = %s", palavra3);

    return 0;

}