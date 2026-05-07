#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float base,altura,raio,calculo;
    char op;
    printf("\nDigite entre q(quadrado), t(triangulo), c(circulo), r(retangunglo): \n\n");
    scanf("%c", op);


    switch(op){
        case 'q':
        
            printf("Digite o lado 1: ");
            scanf("%f",base);

            printf("Digite o lado 2: ");
            scanf("%f",  altura);

            calculo = base * altura;

            printf("A area é: %.2f", calculo);
            break;

        case 't':
        
            printf("Digite a base: ");
            scanf("%f",base);

            printf("Digite a altura: ");
            scanf("%f",  altura);

            calculo = (base * altura)/2;

            printf("A area é: %.2f", calculo);
            break;

        case 'r':
        
            printf("Digite a base: ");
            scanf("%f",base);

            printf("Digite a altura: ");
            scanf("%f",  altura);

            calculo = base * altura;

            printf("A area é: %.2f", calculo);
            break;

        case 'c':
        
            printf("Digite o raio: ");
            scanf("%f",raio);

            calculo = pow(raio, 2)* 3,14;

            printf("A area é: %.2f", calculo);
            break;

        default:
            break;
    }

    return 0;
}