#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b,c;
    printf("Digite o Lado A: \n");
    scanf("%i",&a);

    printf("Digite o Lado B: \n");
    scanf("%i",&b);
    
    printf("Digite o Lado C: \n");
    scanf("%i",&c);
    

    if (a == b && b ==c){
        printf("\nTriangulo Equilatero");
        
    }
    else if (a == b || b == c || c == a){
        printf("\nTriangulo Isoceles");
    }
    else{
        printf("\nTriangulo Escaleno");
    }
        
    return 0;
}