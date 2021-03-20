#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno{
    int matricula;
    float p1,p2,mg;
    char nome[30];
};

int main(){

    aluno aln[5];
    int i = 0;
    char maiorp1[30], maiormg[30], menormg[30];
    float mg, maiormedia = 0, menormedia = 10, mp1 = 0;

    for(i; i <= 4; i++){
        printf("\nMatricula: ");
        scanf("%d",&aln[i].matricula);
        printf("\nNome do aluno: ");
        fflush(stdin);
        gets(aln[i].nome);
        printf("\nNota p1: ");
        scanf("%f",&aln[i].p1);
        printf("\nNota p2: ");
        scanf("%f",&aln[i].p2);

        mg = (aln[i].p1 + aln[i].p2)/2;

        aln[i].mg = mg;

        system("cls");

    }

    for(i = 0; i <= 4; i++){
        if(aln[i].mg >= 6.0){
            printf("\n\n%s foi aprovado com a nota %.2f\n", aln[i].nome, aln[i].mg);
        }
        else{
            printf("\n\n%s foi reprovado com nota %.2f.\n", aln[i].nome, aln[i].mg);
        }
        //descobre maior p1
        if(mp1 <= aln[i].p1){
            mp1 = aln[i].p1;
            strncpy(maiorp1, aln[i].nome,30);
        }

        //descobre maior mg
        if(maiormedia <= aln[i].mg){
            maiormedia = aln[i].mg;
            strncpy(maiormg, aln[i].nome  ,30);
        }
        //descobre menor mg
        if(menormedia >= aln[i].mg){
            menormedia = aln[i].mg;
            strncpy(menormg, aln[i].nome,30);
        }
    }

    printf("\n\nO aluno %s obteve a maior nota na p1.", maiorp1);
    printf("\nO aluno %s obteve a maior media geral.", maiormg);
    printf("\nO aluno %s obteve a menor media geral.", menormg);
}
