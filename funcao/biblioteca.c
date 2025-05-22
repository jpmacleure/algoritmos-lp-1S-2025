/*
    Retorna o maior entre 2 números inteiros.
*/
int maior_2n(int a, int b){
    int maior;
    if(a > b){
        maior = a;
    }
    else{
        maior = b;
    }
    return maior;
}

/*
    Retorna o maior entre 3 números inteiros.
*/
int maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a, b), c);
}

/*
    Retorna o maior entre N números
*/
int maior_n(int numeros[], int n){
    int maior = numeros[0];
    for(int i = 0; i < n; i++){
        maior = maior_2n(maior, numeros[i]);
    }
    return maior;
}