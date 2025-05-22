#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){
    
    int x, y, z;
    int numeros[argc - 1];
    if(argc < 3){
        printf("Informe 2 ou 3 argumentos.");
        return 1;
    }

    if(argc == 3){
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        printf("%d", maior_2n(x, y));
    }
    else if (argc == 4){
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        z = atoi(argv[3]);
        printf("%d", maior_3n(x, y, z));
    }
    else{
        for(int i=0; i < argc-1; i++){
            numeros[i] = atoi(argv[i+1]);
        }
        printf("%d", maior_n(numeros, argc-1));
    }

    

    return 0;
}