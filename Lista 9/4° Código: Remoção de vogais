main(3).c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char v){
    v = tolower(v);
    return (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u');
}

int main(){
    
    int i, j = 0, vogais = 0;
    char frase[100], frase_sem_vogal[100];
    
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    
    size_t comprimento = strlen(frase);
    
    if (comprimento > 0 && frase[comprimento - 1] == '\n') {
        frase[comprimento - 1] = '\0';
        comprimento--;
    }
    
    for(i = 0; i < comprimento; i++){
        if(is_vowel(frase[i])){
            vogais++;
        } else{
            frase_sem_vogal[j++] = frase[i];
        }
    }
    
    frase_sem_vogal[j] = '\0';
    
    printf("\n\nA sua frase contem %d vogais", vogais);
    printf("\nE a sua frase sem vogais eh: %s\n\n", frase_sem_vogal);
    
    return 0;
}
