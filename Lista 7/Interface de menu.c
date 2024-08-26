#include <stdio.h>

int main(){

    int op, numeros[5], i, maior, menor, mult;

    do{
        printf("\n=========Menu=========\n");
        printf("1- Ler pares entre 5 numeros inteiros;\n");
        printf("2- Maior e menor numeros entre 5 inteiros;\n");
        printf("3- Tabuada de um numero;\n");
        printf("Digite 0 para sair.");
        printf("\n\nEscolha uma opcao: ");
        scanf("%d", &op);

    switch(op){
    case 1:

        printf("\nDigite 5 numeros inteiros:\n");
        for(int i = 0; i < 5; i++){
            printf("Numero %d: ", i + 1);
            scanf("%d", &numeros[i]);
        }

        printf("\nOs numeros pares dentre os selecionados sao:\n");
        for(int i = 0; i < 5; i++){
                if(numeros[i] % 2 == 0){
                    printf("%d\n", numeros[i]);
                }
        }
        break;
    case 2:

        printf("\nDigite 5 numeros inteiros:\n");
        for(int i = 0; i < 5; i++){
            printf("Numero %d: ", i + 1);
            scanf("%d", &numeros[i]);
        }
        maior = numeros[0];
        menor = numeros[0];

        for (i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        }

        printf("\nO maior numero dentre os digitados eh: %d\n", maior);
        printf("\nO menor numero dentre os digitados eh: %d\n", menor);
        break;
    case 3:
        printf("\nDigite um numero para analisar sua tabuada: ");
        scanf("%d", &mult);

        printf("Tabuada do %d\n", mult);
        for(i = 1; i <= 10; i++){
                printf("%d x %d = %d\n", mult, i, mult * i);
        }
        break;
    default:
        if(op == 0){
            printf("\nSaindo...\n");
            break;
        }else{
            printf("\nOpcao incorreta, digite um valor valido.\n\n");
        }
        }
        }while(op!=0);
}


