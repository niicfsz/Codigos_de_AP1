#include <stdio.h>

int main(){

    int n[10], nprocurado, i, encontrado = 0;

    printf("Digite 10 numeros inteiros:\n\n");
    for(i = 0; i < 10; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\n\nDigite o numero que deseja procurar: ");
    scanf("%d", &nprocurado);

    for(i = 0; i < 10; i++){
        if(n[i] == nprocurado){
        printf("\n\nO numero %d foi encontrado na posicao %d!\n\n", nprocurado, i);
        encontrado = 1;
        break;
        }
    }

    if(!encontrado){
            printf("\n\nO numero digitado nao foi encontrado\n\n");
    }
}

