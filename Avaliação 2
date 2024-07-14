//O código a seguir foi desenvolvido também para uma prova, ele consistia em um programa que armazenava informações de 3 alunos, sendo elas nome, matricula e nota, para que no final possa ser possível declarar aprovação ou reprovação do indivíduo.

#include <stdio.h>
#include <string.h>

int main() {
    char nome[3][100];
    int i, j, matricula[3];
    float nota[3][3], media[3], somanota;

    printf("========SISTEMA DE CALCULO DE MEDIA========\n\n");
    for (i = 0; i < 3; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';

        printf("Digite o numero da matricula do aluno %d: ", i + 1);
        scanf("%d", &matricula[i]);

        somanota = 0;

        printf("Digite as notas do aluno (de 0 a 10):\n");
        for (j = 0; j < 3; j++) {
            do {
                printf("Nota %d: ", j + 1);
                scanf("%f", &nota[i][j]);

                if (nota[i][j] < 0 || nota[i][j] > 10) {
                    printf("Nota invalida! Tente novamente.\n");
                }
            } while (nota[i][j] < 0 || nota[i][j] > 10);
            somanota += nota[i][j];
        }
        media[i] = somanota / 3;

        while (getchar() != '\n');
    }

    printf("\n\n==========INFORMACOES ACADEMICAS==========\n\n");

    for (i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", nome[i]);
        printf("Matricula: %d\n", matricula[i]);
        printf("Notas: ");
        for (j = 0; j < 3; j++) {
            printf("%.2f ", nota[i][j]);
        }
        printf("\nMedia final: %.2f\n", media[i]);
        if (media[i] < 6) {
            printf("Resultado final: REPROVADO\n");
        } else {
            printf("Resultado final: APROVADO\n");
        }
    }

    return 0;
}
