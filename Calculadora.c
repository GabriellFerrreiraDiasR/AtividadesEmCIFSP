#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2,calculo;
    char op;
    printf("Esolha entre com numero, operador e numero: ");
    scanf("%f %c %f", &n1,&op,&n2);

    switch (op)
    {
        case '+':
            calculo = n1 + n2;
            printf("\nn1 + n2 = %.0f",calculo);
            break;
    
        case '-':
            calculo = n1 - n2;
            printf("\nn1 - n2 = %.0f",calculo);
            break;

        case '/':
            calculo = n1 / n2;
            printf("\nn1 / n2 = %.2f",calculo);
            break;
        
        case '*':
            calculo = n1 * n2;
            printf("\nn1 * n2 = %.2f",calculo);
            break;

        default:
            printf("Caractece invalido.");
            break;
    }
    return 0;
}