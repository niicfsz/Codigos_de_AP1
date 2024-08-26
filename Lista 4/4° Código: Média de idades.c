#include <stdio.h>

int main(){

//declarando variáveis
    int idade1, idade2, idade3;
    float media;

//solicitando ao usuário as informações necessárias para o cálculo
    printf("Digite a idade da primeira pessoa para calcular uma media: ");
    scanf("%d", &idade1);
    printf("Agora digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);
    printf("Para finalizar, digite a idade da terceira pessoa: ");
    scanf("%d", &idade3);

//efetuando o cálculo da média
    media = (idade1 + idade2 + idade3)/3.0;

//exibindo o resultado na tela
    printf("\n\no Resultado das medias das idades das 3 pessoas eh igual a: %.2f\n", media);

    return 0;
}
