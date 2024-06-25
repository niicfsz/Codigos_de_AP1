#include <stdio.h>
#include <math.h>

int main(){

//declarando variável
    float peso, altura, imc;

//pedindo ao usuário para que digite suas informações
    printf("Para poder descobrir o seu imc, digite o seu peso (em kilos): ");
    scanf("%f", &peso);
    printf("Agora digite a sua altura (em metros): ");
    scanf("%f", &altura);

//definindo o valor do imc
    imc = peso/pow(altura, 2);

//classificando o imc do usuário
    if(imc < 18.5){
        printf("\nSeu imc eh de %.2f e vc esta com magreza.", imc);
    } else if(imc >= 18.5 && imc <= 24.9){
        printf("\nSeu imc eh de %.2f e vc esta com imc normal.", imc);
    } else if(imc >= 25.0 && imc <= 29.9){
        printf("\nSeu imc eh de %.2f e vc esta com sobrepeso.", imc);
    } else if(imc >= 30.0 && imc <= 39.9){
        printf("\nSeu imc eh de %.2f e vc esta com obesidade.", imc);
    } else{
        printf("\nSeu imc eh de %.2f e vc esta com obesidade grave.", imc);
    }

    return 0;
}
