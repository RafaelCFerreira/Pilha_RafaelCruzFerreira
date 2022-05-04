#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    struct spilha pilha;
    init(&pilha);
    printf("Executando operacao PUSH \n");
    push(&pilha,'A');
    push(&pilha,'B');
    push(&pilha,'C');
    push(&pilha,'D');
    push(&pilha,top(&pilha));
    pop(&pilha);
    push(&pilha, pop(&pilha));
    pop(&pilha);
    for (int i=pilha.topo-1; i>=0; i--){ 
        printf("%c\n",pilha.vetor[i]); 
    }
    printf("\nExecutando operação POP = %c \n",pop(&pilha));
    return 0;
}

