#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
        char nome[31];
        char endereco[51];
        char matricula[11];
        char Curso[31];
   }tAluno;


unsigned int consultaAlunosPorCurso(char *curso,char *cursao,int cont){

        if(strcmp(cursao,curso)==0){
        cont++;
    }
    return cont;
}


int main()
{
    int i=0;
    int j=0;
    int t=0;
    char help[40];
  tAluno gAluno[100];
    printf("digite os cursos a cadastrar:\n");
    for(j=0;j<10;j++){
             gets(gAluno[j].Curso);
    }
    printf("digite o curso a pesquisar:\n");
             gets(help);

        for(j=0;j<10;j++){
          i=i+consultaAlunosPorCurso(help,gAluno[j].Curso,t);
            }
  printf("%d vezes", i);


    return 0;
}
