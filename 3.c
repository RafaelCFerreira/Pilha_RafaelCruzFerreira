#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(){
    int i;
    struct spilha x, y;
    init(&x);
    init(&y);
    char name[MAX];
    printf("Entre com nome: ");
    scanf("%s", name);
    int j = strlen(name)-1;
    for (i = 0; i <=j; i++){
        push(&x, name[i]);
    }
    for (i=j; i>=0; i--){
        push(&y, pop(&x));
    }
    printf("\n y é = %s\n", y.vetor);
    if(strcmp(y.vetor, name)==0){
        printf("A palavra é palindroma.\n");
    }else{
        printf("Não é palindroma.\n");
    }
    return 0;
}