#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nome[20];
    char estilo[20];
    int nintegr;
    int posic;

}BANDA;

int Preencher(BANDA *Group){
    int i;
     /*for(i=0;i<5;i++){
        printf("Digite os dados da banda\n");
        printf("nome:");
        gets(Group[0].nome);
        printf("estilo:");
        gets(Group[i].estilo);
        printf("numero de integrantes:");
        scanf("%d",Group[i].nintegr);
        printf("posicao no rank:");
        scanf("%d",Group[i].posic);
    }*/
    strcpy(Group[0].nome,"EXO");
     strcpy(Group[0].estilo,"KPOP");
      Group[0].nintegr=6;
       Group[0].posic=2;

    strcpy(Group[1].nome,"Twice");
     strcpy(Group[1].estilo,"Kgirl");
      Group[1].nintegr=9;
       Group[1].posic=5;

    strcpy(Group[2].nome,"BTS");
     strcpy(Group[2].estilo,"KPOP");
      Group[2].nintegr=7;
       Group[2].posic=4;

    strcpy(Group[3].nome,"Red Velvet");
     strcpy(Group[3].estilo,"Kgirl");
      Group[3].nintegr=5;
       Group[3].posic=1;

    strcpy(Group[4].nome,"Dreamcatcher");
     strcpy(Group[4].estilo,"KROCK");
      Group[4].nintegr=7;
       Group[4].posic=3;


}

int Ranking(BANDA *Group){
    int i;
    int x;
    printf("qual colocacao do ranking deseja?\n");
    scanf("%d",&x);
     fflush(stdin);
   //  __fpurge(stdin);


    for(i=0;Group[i].posic!=x;i++){}

    printf("%s\n",Group[i].nome);

}

int EstiloM(BANDA *Group){
    int i;
    char Estilo[10];

    printf("qual Estilo musical?\n");
        gets(Estilo);
        fflush(stdin);

     for(i=0;i<5;i++){
      if(strcmp(Estilo,Group[i].estilo)==0){
         printf("%s\n",Group[i].nome);
      }
     }
}

int NomeDa(BANDA *Group){
    int i=0;
    char Nome[20];

    printf("qual o nome da banda?\n");
        gets(Nome);

     for(i=0;i<5;i++){
      if(strcmp(Nome,Group[i].nome)==0){
         printf("%s está no ranking",Group[i].nome);
          printf(" na posicao %d\n",Group[i].posic);

      }
     }
}

int main()
{

    BANDA Group[5];

    Preencher(Group);

    Ranking(Group);

    EstiloM(Group);

    NomeDa(Group);

    return 0;
}
