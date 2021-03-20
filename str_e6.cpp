#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

struct lutador{
    char nome[30];
    int poder;
};

int main(){

    lutador p1[5], p2[5];
    int i = 0;
    srand(time(NULL));

    for(i; i < 5; i++){

        printf("Nome do player 1: ");
        gets(p1[i].nome);
        printf("Nome do player 2: ");
        gets(p2[i].nome);
        p1[i].poder = rand()%100;
        p2[i].poder = rand()%100;
        printf("\n\n%s(Poder %d) VS %s(Poder %d)", p1[i].nome,p1[i].poder,p2[i].nome,p2[i].poder);
        if(p1[i].poder < p2[i].poder){
            printf("\n\nO Jogador %s venceu!!",p2[i].nome);
        }
        else{
            printf("\n\nO Jogador %s venceu!!",p1[i].nome);
        }
        getch();
        system("cls");
    }
}
