#include <stdio.h>

int main(){

    int n[12], i, d[12];

    printf("Digite 12 numeros inteiros:\n\n");
    for(i = 0; i < 12; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    for(i = 0; i < 12; i++){
        d[i] = n[i] * 2;
    }

    printf("\n\nO dobro dos numeros digitados eh:\n\n");
    for(i = 0; i < 12; i++){
            printf("%d * 2 = %d\n", n[i], d[i]);
    }
    printf("\n\n");

    return 0;
}
