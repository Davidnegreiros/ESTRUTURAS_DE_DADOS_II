// Questão 02: Calcula média.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

float* gerador(size_t n);

void Media_Iterativa(float *valores, int n);
float Media_Recursiva(float *valores, int n, float *media);

int main () {
    printf ("\nSequencia aleatoria\n\n");

    int n = 5;
    float *res = gerador (n);
    float valores[n];
    float *media, m;

    for( size_t i = 0; i < n; i ++){
        valores[i] = res[i];
    }
    for( size_t i = 0; i < n ; i ++){
        printf ("valor (%d) = %f\n", i, valores[i]);
    }
    
    Media_Iterativa(valores, n);
    m = Media_Recursiva(valores, n, &media);

    printf("\nTotal da media recursiva = %.2f\n\n", m);

    return(0);
}

float* gerador (size_t n){
    srand (time(NULL));
    float *res = (float*) malloc(n * sizeof( int ));

    for ( size_t i = 0; i < n ; i ++){
        res [i] = rand () % 1000;
    }
    return (res);
}

void Media_Iterativa(float *valores, int n){
    float soma = 0.0;
    float media = 0.0;
    for( int i = 0; i < n; i ++){
        soma = soma + valores[i];
    }
    media = soma/n;

    printf("\n\nTotal da media iterativa = %.2f\n\n", media);
}

float Media_Recursiva(float *valores, int n, float *media){
    if(n == 1){
        return(valores[0]);
    }
    else{
        *media = (valores[n-1] + ((n-1) * Media_Recursiva(valores, n-1, media)))/n;
    }
    return(*media);
}