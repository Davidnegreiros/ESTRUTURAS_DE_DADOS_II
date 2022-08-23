// Questão 06: Vetor com os valores invertidos.
#include <stdio.h>

void troca(int *V, int inicio, int fim);
void imprimir(int *V, int tam);

int main(){ 
    int V[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = 10;
    int inicio = 0, fim = tam-1;
   
    printf("\n");
    imprimir(V, tam);
    printf("\n");

    troca(V, inicio, fim);
    imprimir(V, tam);
    
    printf("\n\n");
    return(0);
}

void troca(int *V, int inicio, int fim){
    int aux;
    if(inicio < fim){
        aux = V[inicio];
        V[inicio] = V[fim];
        V[fim] = aux;

        troca(V, inicio+1, fim-1);
    }
}

void imprimir(int *V, int tam){
    if(tam == 1){
        printf("%d ", V[tam - 1]);
    }
    else{
        imprimir(V, tam-1);
        printf("%d ", V[tam-1]);
    }
}