#include <stdio.h>
#include <stdlib.h>

int main(){

//declarando as variáveis
    float n1, n2, n3, med;

//solicitando as informações aos usuários
    printf("Insira a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota do aluno: ");
    scanf("%f", &n3);

//efetuando os cálculos
    med = (n1+n2+n3)/3;

//exibindo o resultado na tela
    printf("\n\nEssa eh a media do aluno: %.2f\n", med);

return 0;
}
