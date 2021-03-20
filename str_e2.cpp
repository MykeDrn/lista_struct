#include<stdio.h>

struct livro{
    char title[30];
    int y_rls, numpg;
    float price;
};

int main(){
	livro reg[5];
	int i, med = 0, ttl;

	for(i = 0; i <= 4; i++){
        printf("\nTitulo do livro: ");
        fflush(stdin);
        gets(reg[i].title);
        printf("\nAno da edicao: ");
        scanf("%d", &reg[i].y_rls);
        printf("\nNumero de paginas: ");
        scanf("%d", &reg[i].numpg);
        printf("\nPreco: ");
        scanf("%f", &reg[i].price);
        med = med+reg[i].numpg;
	}

	ttl = med/5;
	printf("\n\nMedia de paginas: %d", ttl);
}
