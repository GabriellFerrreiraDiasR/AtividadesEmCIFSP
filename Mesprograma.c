#include <stdio.h>
#include <stdlib.h>

int main(){
    char op;

    printf("\nDigite o mes do ano que deseja: \n\n");
    scanf("%c", op);

    switch(op){
        case 1:
            printf("\njaneiro");
            break;


        case 2:
            printf("\nfevereiro");
            break;


        case 3:
            printf("\nmarco");
            break;


        case 4:
            printf("\nabril");
            break;


        case 5:
            printf("\nmaio");
            break;


        case 6:
            printf("\njunho");
            break;


        case 7:
            printf("\njulho");
            break;


        case 8:
            printf("\nagosto");
            break;


        case 9:
            printf("\nsetembro");
            break;


        case 10:
            printf("\noutubro");
            break;


        case 11:
            printf("\nnovembro");
            break;


        case 12:
            printf("\ndezembro");
            break;

        default:
            printf("Caractece invalido.");
            break;

    }
    
    return 0;
}