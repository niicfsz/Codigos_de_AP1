#include <stdio.h>

int main(){

    int i, n[8], maior, menor;

    printf("Digite 8 numeros:\n\n");
    for(i = 0; i < 8; i++){
            printf("Numero %d: ", i + 1);
            scanf("%d", &n[i]);
    }

     maior = menor = n[0];

    for (i = 1; i < 8; i++) {
        if (n[i] > maior) {
            maior = n[i];
        }
        if (n[i] < menor) {
            menor = n[i];
        }
    }

    printf("\n\nO maior numero dentre os escolhidos eh: %d", maior);
    printf("\n\nO menor numero dentre os escolhidos eh: %d\n\n", menor);

    return 0;
}
