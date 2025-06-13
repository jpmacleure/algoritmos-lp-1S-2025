#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto {
    int a, b;
} Ponto;

int main(int argc, char* argv[]){

    Ponto X, Y;
    float dXY;

    X.a = atoi(argv[1]);
    Y.a = atoi(argv[2]);
    X.b = atoi(argv[3]);
    Y.b = atoi(argv[4]);

    printf("X(%d, %d)\nY(%d, %d)\n", X.a, X.b, Y.a, Y.b);

    dXY = sqrt(pow(Y.a - X.a, 2) + pow(Y.b - X.b, 2));
    printf("dXY = %.2f", dXY);

    return 0;
}