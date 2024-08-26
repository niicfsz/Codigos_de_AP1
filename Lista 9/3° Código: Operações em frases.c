main.c
#include <stdio.h>
#include <string.h>
    
    void remove_spaces(char* frase){
        int i, j = 0;
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0';
}

    void replace_letter(char* frase, char letra) {
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == letra) {
            frase[i] = '*';
        }
    }
}

int main(){

    char frase[100], letra;
    
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    
    frase[strcspn(frase, "\n")] = '\0';
    
    printf("Digite a letra que deseja substituir por '*': ");
    scanf(" %c", &letra);
  
     remove_spaces(frase);
    replace_letter(frase, letra);

    printf("\nA sua frase modificada eh: %s\n\n", frase);

    return 0;
}

    
