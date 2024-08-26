#include <stdio.h>

int main(){

    float n1, n2, soma, sub, mult, div;
    char op;

    printf("digite um numero real: ");
    scanf("%f", &n1);
    printf("escolha uma das operacoes a seguir (+,-,*,/): ");
    scanf(" %c", &op);
    printf("agora digite outro numero real: ");
    scanf("%f", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    if (n2 != 0) {
    div = n1 / n2;}

    switch (op){
    case '+':
        printf("\no resultado da sua operacao eh %.2f", soma);
        break;
    case '-':
        printf("\no resultado da operacao eh %.2f", sub);
        break;
    case '*':
        printf("\no resultado da operacao eh %.2f", mult);
        break;
    case '/':
        if (n2 == 0){
                printf("erro, divisao por 0!");
        } else{
        printf("\no resultado da operacao eh %.2f", div);
        }
        break;
    default:
        printf("\nerro, operador incorreto");
    }

    return 0;
}
