#include <stdlib.h>
#include <stdio.h>
#include "conjunto.h"

struct conjunto{
    int tam;
    int *elem;
};

Conjunto* criar(int TAM){

    Conjunto* conj=(Conjunto*)malloc(sizeof(Conjunto));
    conj->tam=TAM;
    conj->elem = (int*)malloc(TAM*sizeof(int));

    return conj;
}

void preencher(Conjunto* A){

    if(A==NULL){
         printf("ERRO MEMORIA");
         exit(1);
    }

    else if(A->tam == 0){
        printf("\nConjunto vazio.\n");
    }

    else{
        int elemento, aux, i=0;
        printf("\nDigite os elementos do conjunto: \n");
        while( i<(A->tam)){
            aux=0;
            printf("\nInforme um elemento: ");
            scanf("%d", &elemento);
             if(i==0){
                A->elem[i] = elemento;
             }
             else{
                for(int j=0; j<i; j++){
                    if(elemento == A->elem[j]){
                        aux++;
                    }
                }
             }
             if(aux == 0){
                A->elem[i] = elemento;
                i++;
             }
             else{
                printf("Valor repetido. Digite novamente\n");
             }
        }
        printf("\nConjunto preenchido!\n\n");
    }

}

void imprimir(Conjunto* A){

    if(A==NULL){
         printf("ERRO MEMORIA");
         exit(1);
    }

    else{
        for(int i=0; i<A->tam;i++){
            printf("%d ", A->elem[i]);
        }
    }
}

void uniao(Conjunto* A, Conjunto* B){

    if(A==NULL || B==NULL){
         printf("ERRO MEMORIA");
         exit(1);
    }

    else{
        int tamanho, t=0, aux;
        for(int i=0; i<(A->tam);i++){
            for(int j=0; j<(B->tam);j++){
                if(A->elem[i] == B->elem[j]){
                    t++;
                }

            }
        }
        tamanho=(A->tam)+(B->tam)-t;
        if(tamanho<=10){
            imprimir(A);

            for(int i=0; i<(B->tam); i++){
                aux=0;
                for(int j=0; j<(A->tam);j++){
                    if(B->elem[i] == A->elem[j]){
                        aux++;
                    }
                }
                if(aux==0){
                    printf("%d ", B->elem[i]);
                }
            }
        }
        else{
            printf("O conjunto e muito grande!\n");
        }
    }
}

void intersecao(Conjunto* A, Conjunto* B){

    if(A==NULL || B==NULL){
         printf("ERRO MEMORIA");
         exit(1);
    }

    else{
        int aux;
        for(int i=0; i<(A->tam);i++){
            aux=0;
            for(int j=0; j<(B->tam);j++){
                if((A->elem[i]) == (B->elem[j])){
                    aux++;
                }
            }
            if(aux != 0){
                printf("%d ", (A->elem[i]));
            }
        }
    }
}

void diferenca(Conjunto* A, Conjunto* B){

    if(A==NULL || B==NULL){
         printf("ERRO MEMORIA");
         exit(1);
    }

    else{
        int  aux;
        for(int i=0; i<(A->tam);i++){
            aux=0;
            for(int j=0;j<(B->tam);j++){
                if(A->elem[i] == B->elem[j]){
                    aux++;
                }


            }
            if(aux == 0){
                printf("%d ", (A->elem[i]));
            }
        }
    }
}

int contido(Conjunto* A, Conjunto* B){

   if(A==NULL || B==NULL){
         printf("ERRO MEMORIA");
         exit(1);
    }

    else{
        int aux=0;
        for(int i=0; i<(A->tam);i++){
            for(int j=0; j<(B->tam);j++){
                if((A->elem[i]) == (B->elem[j])){
                    aux++;
                }
            }
        }

        if(aux == (A->tam)){

            return 1;
        }
        else{
            return 0;
        }
    }
}

void complementar(Conjunto* A, Conjunto* B){

    if(A==NULL || B==NULL){
         printf("ERRO MEMORIA");
         exit(1);
    }
    else{
        if(contido(A, B) == 1){
            diferenca(B, A);
        }
        else{
            printf("\n Nao ha complementar.\n");
        }
    }
}
