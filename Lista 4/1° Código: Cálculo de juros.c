de#include <stdio.h>
#include <math.h>

int main(){

//declarando variáveis
    double valor, juros, juros2, anos, valor2;

//solicitando ao usuário as informações necessárias
    printf("Digite o valor principal para calcular com juros: ");
    scanf("%lf", &valor);
    printf("Digite agora o valor da taxa de juros: ");
    scanf("%lf", &juros);
    printf("Digite agora o tempo decorrido (em anos): ");
    scanf("%lf", &anos);

//calculando os juros
    juros2 = 1 + juros;
    valor2 = valor * pow(juros2, anos);

//exibindo o resultado
    printf("\n\nUtilizando a formula de VF = P * (1 + r)^n, temos que o valor total citado com juros eh de: %.2lf\n", valor2);

    return 0;
}
