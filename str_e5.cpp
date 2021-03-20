#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define tam 100

struct endereco{

    char rua[15];
    int numero;
    char complemento[15];
    char bairro[15];
    int cep;
    char cidade[15];
    char estado[15];
    char pais[15];

};
struct telefone{

    int ddd;
    int num;

};
struct aniversario{

    int dia;
    int mes;
    int ano;

};
struct cadastro{

    int codigo;
    char nome[30];
    char eMail[30];
    char obs[40];
    endereco endr;
    telefone tel;
    aniversario data;
};
int main(){

    int i = 0, codUser, trig = 1;
    char con;

    struct cadastro cad[tam];


    for(i; i<tam; i++){

        printf("\n-=Agenda=-\n\n");
        printf("-=Contato=-\n");
        printf("Codigo: ");
        scanf("%d", &cad[i].codigo);
        printf("Nome: ");
        fflush(stdin);
        gets(cad[i].nome);
        printf("eMail: ");
        gets(cad[i].eMail);

        printf("\n-=Endereco=-\nRua: ");
        gets(cad[i].endr.rua);
        printf("Numero: ");
        scanf("%d", &cad[i].endr.numero);
        printf("Complemento: ");
        fflush(stdin);
        gets(cad[i].endr.complemento);
        printf("Bairro: ");
        gets(cad[i].endr.bairro);
        printf("Cep: ");
        scanf("%d", &cad[i].endr.bairro);
        printf("Cidade: ");
        fflush(stdin);
        gets(cad[i].endr.cidade);
        printf("Estado: ");
        gets(cad[i].endr.estado);
        printf("Pais: ");
        gets(cad[i].endr.pais);

        printf("\n-=Telefone=-\nDDD:");
        scanf("%d", &cad[i].tel.ddd);
        fflush(stdin);
        printf("Telefone:");
        scanf("%d", &cad[i].tel.num);
        fflush(stdin);

        printf("\n-=Aniversario=-\nDia: ");
        scanf("%d", &cad[i].data.dia);
        printf("Mes: ");
        scanf("%d", &cad[i].data.mes);
        printf("Ano: ");
        scanf("%d", &cad[i].data.ano);
        fflush(stdin);
        printf("\n\nObservacao: ");
        gets(cad[i].obs);
        printf("\n\nAperte enter para continuar");
        getch();
        system("cls");
    }

    while(trig == 1){
    do{
    printf("\nDeseja realizar uma consulta? [s/n]: ");
    fflush(stdin);
    scanf("%c", &con);
    system("cls");
    }while(con != 'n' && con != 's');

    switch(con){

        case 's':

            printf("\nDigite o codigo do usuário: ");
            scanf("%d", &codUser);
            for(i = 0; i<tam; i++){

                if(codUser == cad[i].codigo){
                    printf("Codigo: %d", cad[i].codigo);
                    printf("\nNome: %s", cad[i].nome);
                    printf("\neMail: %s", cad[i].eMail);
                    printf("\n\n-=Endereco=-\nRua: %s", cad[i].endr.rua);
                    printf("\nNumero: %d");
                    printf("\nComplemento: %s", cad[i].endr.complemento);
                    printf("\nBairro: %s", cad[i].endr.bairro);
                    printf("\nCep: %d", cad[i].endr.cep);
                    printf("\nCidade: %s", cad[i].endr.cidade);
                    printf("\nEstado: %s", cad[i].endr.estado);
                    printf("\nPais: %s", cad[i].endr.pais);
                    printf("\n\n-=Telefone=-\nDDD:", cad[i].tel.ddd);
                    printf("\nTelefone: %d", cad[i].tel.num);
                    printf("\n\n-=Aniversario=-\nDia: %d", cad[i].data.dia);
                    printf("\nMes: %d", cad[i].data.mes);
                    printf("\nAno: %d", cad[i].data.ano);
                    printf("\n\nObservacao: %s", cad[i].obs);
                    printf("\n\nAperte enter para continuar");
                    getch();
                    system("cls");

                    }
                }
            break;

        case 'n':
            trig = 0;
            break;

        default:
            printf("opção invalida.\n");
            break;

    }
        printf("\nDeseja realizar uma consulta? [digite 1 para continuar]: ");
        fflush(stdin);
        scanf("%d", &trig);
        if(trig != 1){
            break;
        }

    }
}
