#include <stdio.h>

int main(){

    int n, n2;

    printf("digite um numero: ");
    scanf("%d", &n);

    if(n > 0) {
        n2 = 1;
    } else if(n == 0) {
        n2 = 0;
    } else {
        n2 = -1;
    }

    switch (n2){
    case 1:
        printf("o seu numero eh positivo!");
        break;
    case 0:
        printf("o seu numero eh 0!");
        break;
    default:
        printf("o seu numero eh negativo!");
    }

    return 0;
}
