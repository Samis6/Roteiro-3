#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float Porcento(float votos,float t){
    float x;
    x=(votos/t)*100;
    return x;
}

int Ranking(int *Jogadores,int t){
    int count;

    for(count=1;count<24;count++){
        if(Jogadores[count]!=0){
            printf("%d\t%d\t    %.1f%%\n",count,Jogadores[count],Porcento(Jogadores[count],t));
            }
        }
    }

int Melhor(int *Jogadores){
    int maior=0;
    int count;
    for(count=1;count<24;count++){
        if(Jogadores[count]>maior){
            maior=Jogadores[count];
        }
    }
    for(count=1;count<24;count++){
        if(Jogadores[count]==maior){
            return count;
        }
    }
}

int main()
{
    int i;
    int t=0;
    int count;
    int Jogadores[24];


    for(i=0;i<24;i++){
        Jogadores[i]=0;
        }

    while(i!=0){

        printf("Numero do jogador ou 0 para encerrar:");

        scanf("%d",&i);
        if(i>23){
            printf("numero de jogador invalido\n");
        }else{
        t++;
        Jogadores[i]++;
        }}
        t--;


        printf("\nResultado da votacao:\n");
        printf("\nForam computados %d votos\n",t);

        printf("Jogador\tVotos\t    %%\n");
        Ranking(Jogadores,t);

        count=Melhor(Jogadores);

        printf("O melhor foi o numero %d, com %d votos, correspondendo a %.f%% do total de votos", count ,Jogadores[count], Porcento(Jogadores[count],t));

    return 0;
}
