#include <stdio.h>

int main(){

    int n;

    printf("digite um numero correspondente a um mes (1 a 12): ");
    scanf("%d", &n);

    switch (n){
    case 1:
        printf("\no mes correspondente eh: janeiro!");
        break;
    case 2:
        printf("\no mes correspondente eh: fevereiro!");
        break;
    case 3:
        printf("\no mes correspondente eh: marco!");
        break;
    case 4:
        printf("\no mes correspondente eh: abril!");
        break;
    case 5:
        printf("\no mes correspondente eh: maio!");
        break;
    case 6:
        printf("\no mes correspondente eh: junho!");
        break;
    case 7:
        printf("\no mes correspondente eh: julho!");
        break;
    case 8:
        printf("\no mes correspondente eh: agosto!");
        break;
    case 9:
        printf("\no mes correspondente eh: setembro!");
        break;
    case 10:
        printf("\no mes correspondente eh: outubro!");
        break;
    case 11:
        printf("\no mes correspondente eh: novembro!");
        break;
    case 12:
        printf("\no mes correspondente eh: dezembro!");
        break;
    default:
        printf("\no mes correspondente nao existe!");
    }

    return 0;
}
