#include <stdio.h>

int main(){

    int n[10], i;

    printf("Digite 10 numeros inteiros:\n\n");
    for(i = 0; i < 10; i++){
        printf("Numero %d: ", i +1);
        scanf("%d", &n[i]);
    }

    printf("A sequencia inversa dos numeros digitados eh:\n\n");
    for(i = 9; i >= 0; i--){
        printf("Numero %d: %d\n", i, n[i]);
    }

    printf("\n\n");

    return 0;
}
