#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

int main(){

    int tamanho;
    Conjunto* A;
    A = NULL;
    Conjunto* B;
    B = NULL;
    Conjunto* C;
    C = NULL;

    C = criar(0);
    printf("\nConjunto vazio = [");
    imprimir(C);
    printf("]");

    printf("\n\nVamos criar 2 conjuntos! \n");
    printf("\nInforme o tamanho do conjunto A: ");
    scanf("%d", &tamanho);

    while(tamanho>10){
            printf("\nERRO: Valor max de 10 elementos! Digite novamente: ");
        scanf("%d", &tamanho);
    }

    A = criar(tamanho);
    preencher(A);

    printf("\nInforme o tamanho do conjunto B: ");
    scanf("%d", &tamanho);

    while(tamanho>10){
            printf("\nERRO: Valor max de 10 elementos! Digite novamente: ");
        scanf("%d", &tamanho);
    }

    B = criar(tamanho);
    preencher(B);

    printf("\nConjunto A = [ ");
    imprimir(A);
    printf("]");

    printf("\nConjunto B = [ ");
    imprimir(B);
    printf("]");

    printf("\nUniao de A e B = [ ");
    uniao(A, B);
    printf("]");

    printf("\nIntersecao de A e B = [ ");
    intersecao(A, B);
    printf("]");

    printf("\nDiferenca de A e B = [ ");
    diferenca(A, B);
    printf("]");

    printf("\nDiferenca de B e A = [ ");
    diferenca(B, A);
    printf("]");

    if(contido(A, B) == 1){
        printf("\nA esta contido em B.");
        printf("\nComplementar de A em B = [ ");
        complementar(A, B);
        printf("]");
    }

    else{
        printf("\nA nao esta contido em B.");
    }

    if(contido(B, A) == 1){
        printf("\nB esta contido em A.");
        printf("\nComplementar de B em A = [ ");
        complementar(B, A);
        printf("]");
    }

    else{
        printf("\nB nao esta contido em A.\n\n");
    }

    system("pause");
    return 0;
}
