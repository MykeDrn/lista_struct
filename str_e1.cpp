#include<stdio.h>
#define cadastros 500

struct hab{
    int age, chl;
    char sex[10];
    long sly;
};

int main(void){

    hab habitante[500];
    int i = cadastros;

    for (i; i>0; i--){

        printf("Genero: ");
        fflush(stdin);
        gets(habitante[i].sex);
        printf("Idade: ");
        scanf("%d", &habitante[i].age);
        printf("Numero de filhos: ");
        scanf("%d", &habitante[i].chl);
        printf("Salario: ");
        scanf("%f", &habitante[i].sly);
    }

    for (i; i>0; i--){

        printf("\nIdade: %d\nNumero de filhos: %d", habitante[i].age, habitante[i].chl);
        printf("\nSexo: %s\nSalario: %.2f", habitante[i].sex, habitante[i].sly);
    }

}
