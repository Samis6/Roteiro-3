#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[21];
    int i;
    printf("Digite um nome\n");
    scanf("%s",&nome);

    for(i=0;nome[i]!='\0';i++){
        printf("%c",nome[i]);
        printf("\n");
    }
    return 0;
}
