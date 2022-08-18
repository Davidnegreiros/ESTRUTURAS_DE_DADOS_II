// Questão 03: palíndromo.
#include <stdlib.h>
#include <stdio.h>

int verifica_palindromo(char *palavra);

int main () {
    int cont;
    char palavra[50];

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    cont = verifica_palindromo(palavra);

    if(cont == 1){
        printf("\nA palavra %s e um palindromo!\n\n", palavra);
    }
    else{
        printf("\nA palavra %s nao e um palindromo!\n\n", palavra);
    }


    return(0);
}

int verifica_palindromo(char *palavra){
    int i, j, cont1 = 0, cont2 = 0, aux1 = 0, aux2 = 0;
    char palavra2[50];

    // faz uma cópia da palavra digitada para um segundo vetor.
    i = 0;
    while(palavra[i] != '\0'){
        palavra2[i] = palavra[i];
        i++;
        aux1++;
        aux2++;
    }
    // Compara os dois vetores e verifica se são iguais.
    aux2--;
    for(i = 0, j = aux2; i < aux1; i++, j--){
        cont1++;
        if(palavra[i] == palavra2[j]){
            cont2++;
        }
    }
    if(cont1 == cont2){
        return(1);
    }
    else{
        return(2);
    }
}