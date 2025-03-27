#include <stdio.h>

int main(int argc, char* argv[]){
    int idade;
    float altura;
    float peso;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("A idade eh %d\n", idade);
    printf("A altura eh %.2f\nO peso eh %.2f\n", altura, peso);
    
    float dobro_peso = peso * 2.0;
    printf("O dobro do peso eh %.2f", dobro_peso);

    return 0;
}