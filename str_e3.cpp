#include<stdio.h>

struct data{

    int d = 0;
    int m = 0;
    int a = 0;
};

struct user{

    char nome[30];
    float altura = 0;
    data dataNascimento;

};

int main(){

    int i = 1;
    user cad[10];
    FILE* fopen(teste.doc);

    for (i; i <= 10; i++){

        printf("\n\nPreencha as informações dos usuarios.\n");
        printf("\nNome: ");
        fflush(stdin);
        gets(cad[i].nome);
        printf("\nAltura: ");
        scanf("%.2f", &cad[i].altura);
        printf("\n-=Data de nascimento=-\nDia: ");
        fflush(stdin);
        scanf("%d", &cad[i].dataNascimento.d);
        printf("\nMes: ");
        scanf("%d", &cad[i].dataNascimento.m);
        printf("\nAno: ");
        scanf("%d", &cad[i].dataNascimento.a);

    }

}
