#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(){
    struct spilha x, y, z;
    init(&x);
    init(&y);
    init(&z);
    int number;
    printf("Vetor random: ");
    for(int i = 0; i < MAX; i++){
        number = rand()%11;
        push(&x, number);
        printf("%d ", x.vetor[i]);
    }
    for (int i=MAX-1; i>=0; i--){ 
        if(x.vetor[i]%2==0 || x.vetor[i]==0){ 
            push(&y,pop(&x)); 
        }
        else{
            push(&z,pop(&x));
        }
    }
    printf("\nVetor par é: ");
    for (int i=0; i<=y.topo -1; i++){ 
        printf("%d ", y.vetor[i]);
    } 
    printf("\nVetor ímpar: ");
    for (int i=0; i<=z.topo -1; i++){
        printf("%d ", z.vetor[i]);
    } 
    return 0;
}