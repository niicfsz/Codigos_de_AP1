
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    
    int i, let = 0;
    char palavra[100], palindromo[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    int tam = strlen(palavra);
    
    for(i = 0; i < tam; i++){
        palindromo[i] = palavra[tam-i-1];
    }
    palindromo[i] = '\0';
    
    printf("\n\nA palavra original eh: %s e sua inversa eh: %s", palavra, palindromo);
    
    for(i = 0; i < tam; i++){
        if(tolower(palavra[i]) == tolower(palindromo[i])){
            let++;
        }
    }
    
    if(tam == let){
        printf("\nSendo assim, %s eh um palindromo!\n\n", palavra);
    }else{
        printf("\nSendo assim, %s nao eh um palindromo!\n\n", palavra);
    }
}
