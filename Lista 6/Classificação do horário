#include <stdio.h>

int main(){

    int hora, hora2;

    printf("digite um horario: ");
    scanf("%d", &hora);

      if (hora >= 0 && hora <= 11) {
        hora2 = 1;
    } else if (hora >= 12 && hora <= 17) {
        hora2 = 2;
    } else if (hora >= 18 && hora <= 23) {
        hora2 = 3;
    } else {
        hora2 = 4;
    }

    switch (hora2){
    case 1:
        printf("\nde acordo com o horario descrito a mensagem correta eh: bom dia!");
        break;
    case 2:
        printf("\nde acordo com o horario descrito a mensagem correta eh: boa tarde!");
        break;
    case 3:
        printf("\nde acordo com o horario descrito a mensagem correta eh: boa noite!");
        break;
    case 4:
        printf("\nerro, esse horario nao existe no sistema!");
        break;
    }

    return 0;
}

