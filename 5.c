#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(){
    struct spilha x;
    init(&x);
    int number;
    printf("Entre com um número: ");
    scanf("%d", &number);
    while(number!=0){
        if (number%2==0){
            push(&x, 0);
        }else{
            push(&x, 1);
        }
        number= number/2;
    }
    printf("Número em binário: ");
    for(int i = x.topo-1; i>=0; i--){
        printf("%d ", x.vetor[i]);
    }
    printf("\n");
    return 0;
}