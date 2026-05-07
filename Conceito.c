#include <stdio.h>
#include <stdlib.h>

int main(){
    char op;

    printf("\nDiga o conceito(A,B,C,D,E): \n\n");
    scanf("%c", op);

    switch(op){
        case 'A':
        printf("\nExcelente");
        break;

        case 'B':
        printf("\nÓtimo");
        break;

        case 'C':
        printf("\nBom");
        break;

        case 'D':
        printf("\nRegular");
        break;

        case 'E':
        printf("\nRuim");
        break;

        default:
        printf("Caractece invalido.");
        break;
    }
    


    return 0;
}