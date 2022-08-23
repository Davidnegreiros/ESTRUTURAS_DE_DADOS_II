// Questão 08: Função Fatorial e Fatorial com cauda.
#include <stdio.h>

int fatorial(int n);
int fatorial_aux(int num, int parcial);
int fatorial_recursivo_com_cauda(int n);

int main(){ 
    int n = 5;
    int fat1, fat2;
    int parcial = 1;

    fat1 = fatorial(n);
    printf("\n\nFatorial\n");
    printf("O fatorial de %d eh %d\n", n, fat1);

    fat2 = fatorial_recursivo_com_cauda(n);
    printf("\n\nFatorial_recursivo_com_cauda\n");
    printf("O fatorial de %d eh %d\n\n", n, fat2);

    return(0);
}

int fatorial(int n){
    int i, fat = 1;

    for(i = 1; i <= n; i++){
        fat = fat * i;
    }
    return (fat);
}

int fatorial_aux(int n, int parcial){
    if(n == 1){
        return(parcial);
    }
    else{
        return fatorial_aux((n - 1), (parcial * n));
    }
}

int fatorial_recursivo_com_cauda(int n){
    return fatorial_aux(n, 1);
}