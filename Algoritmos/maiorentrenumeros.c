#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2;
    printf("\nDigite um numero: \n");
    scanf("%f",&n1);

    printf("\nDigite outro numero: \n");
    scanf("%f",&n2);

    if (n1> n2){
        printf("O maior numero e o %.0f",n1);
    }
    else if(n1<n2){
        printf("O maior numero e o %.0f", n2);
    }
    else if(n1 == n2){
        printf("O %.0f e o %.0f sao iguais",n1,n2);
    }
    else{
        printf("Caractece invalido.");
    }
    return 0;
}