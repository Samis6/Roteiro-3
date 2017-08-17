#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[21];
    int i,j;
    int cont=0;
    printf("Digite um nome\n");
    scanf("%s",&palavra);

    for(i=0;palavra[i]!='\0';i++){
    }
    for(j=0;palavra[j]!='\0';j++,i--){
        if(palavra[i-1]==palavra[j]){
           cont++;
        }
    }

    if(strlen(palavra)==cont){
        printf("eh palindromo");
    }else{
        printf("nao eh palindromo");
    }


    return 0;
}
