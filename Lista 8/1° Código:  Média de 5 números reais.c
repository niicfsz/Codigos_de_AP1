#include <stdio.h>

int main(){

    int i;
    float n[5], soma = 0.0, media;

    printf("Digite 5 numeros pertencentes ao conjunto dos numeros reais:\n\n");
    for(i = 0; i < 5; i++){
        printf("Numero %d: ", i + 1);
        scanf("%f", &n[i]);
    }

    for(i = 0; i < 5; i++){
        soma = soma + n[i];
    }

    media = soma / 5;

    printf("\n\nA media dos numeros escolhidos = %.2f\n\n", media);

    return 0;
}
