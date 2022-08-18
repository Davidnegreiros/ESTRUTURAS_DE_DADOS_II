// Questão 01: Algoritmo demorado.
#include <stdio.h>
#include <time.h>

int algoritmoDemorado ( int n);

int main(){
    clock_t tl, soma = 0;
    int x = 10;
    int y = 200;
    for(int i = 0; i < x; i++){
        tl = clock();
        algoritmoDemorado (y);
        tl = clock() - tl;
        soma += tl;
    }
    printf("\n\nO tempo foi = %f\n\n", (((float)soma)/x)/CLOCKS_PER_SEC);
    return(0);
}

int algoritmoDemorado ( int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                for(int l = 0; l < n; l++){
                    soma = i + j + k + l;
                }
            }
        }
    }
    return(soma);
}