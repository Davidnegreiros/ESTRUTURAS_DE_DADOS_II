// Questão 04: Função binomial.
#include <stdlib.h>
#include <stdio.h>

int calculaFatorial(int num);
int calculaBinomial(n,p);

int main(){
    int n = 10,p = 7;
    
    // Imprime o binomial de n sobre p.
    printf("\nO binomial de %d sobre %d eh: %d\n\n", n, p, calculaBinomial(n,p));
    
    return(0);
}

/*
 Retorna o binomial do número passado como parâmetro.

 Fórmula:
    n!
 --------
 p!(n-p)!
*/

int calculaBinomial(n,p){
    return (calculaFatorial(n) / (calculaFatorial(p) * calculaFatorial(n-p)));
}

/*
 Retorna o fatorial do número passado como parâmetro.

 Fórmula:
 n! = n(n-1)!
*/

int calculaFatorial(int num){
    if(num <= 1){
        return (1);
    }
    else{
        return(num * calculaFatorial(num-1));
    }
}