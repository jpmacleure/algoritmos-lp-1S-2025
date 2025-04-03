#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float altura, peso, imc;

    printf("Calculada IMC\n");
    
    // Imprime uma mensagem e ler
    // um valor float na variável altura
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if(imc <= 18.5){
        printf("baixo peso\n");
    }

    if(imc > 18.5 && imc <= 24.9){
        printf("intervalo normal\n");
    }

    if(imc > 24.9 && imc <= 29.9){
        printf("sobrepreso\n");
    }

    if(imc > 29.9 && imc <= 34.9){
        printf("obesidade I\n");
    }

    if(imc > 34.9 && imc <= 39.9){
        printf("obesidade II\n");
    }

    if(imc > 39.9){
        printf("obesidade III\n");
    }


    return 0;
}