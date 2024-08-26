main(1).c
#include <stdio.h>
#include <ctype.h> 

void countWordsAndChars(char frase[]);
void printUpperCase(char frase[]);
void printLowerCase(char frase[]);

int main() {
    char frase[1000];

    printf("Digite uma frase: ");
    fgets(frase, 1000, stdin);

    countWordsAndChars(frase);
    printUpperCase(frase);
    printLowerCase(frase);

    return 0;
}

void countWordsAndChars(char frase[]) {
    int num_palavras = 0, num_caracteres = 0;
    int i = 0;

    while (frase[i] != '\0') {
        if (frase[i] != '\n') {
            num_caracteres++;
        }

        if (isspace(frase[i]) && frase[i] != '\n') {
            num_palavras++;
        }

        i++;
    }

    if (num_caracteres > 0) {
        num_palavras++; 
    }

    printf("\nNúmero de palavras: %d", num_palavras);
    printf("\nNúmero de caracteres: %d", num_caracteres);
}

void printUpperCase(char frase[]) {
    int i = 0;
    printf("\nFrase em maiúsculas: ");
    while (frase[i] != '\0') {
        putchar(toupper(frase[i]));
        i++;
    }
}

void printLowerCase(char frase[]) {
    int i = 0;
    printf("Frase em minúsculas: ");
    while (frase[i] != '\0') {
        putchar(tolower(frase[i]));
        i++;
    }
}
