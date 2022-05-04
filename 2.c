#include <stdio.h>
#include "pilha.h"

int main(){
    struct spilha x;
    struct spilha y;
    struct spilha z;
    init(&x);
    init(&y);
    init(&z);
    push(&x,'A');
    push(&x,'B');
    push(&x,'C');
    push(&x,'D');
    push(&y, pop(&x));
    push(&z, pop(&x));
    push(&y, pop(&x));
    push(&y, pop(&x));
    push(&x, pop(&z));
    push(&z, pop(&y));
    push(&z, pop(&x));
    push(&z, pop(&y));
    push(&z, pop(&y));
    for (int i=z.topo-1; i>=0; i--){ 
        printf("%c\n",z.vetor[i]); 
    }
    return 0;
}