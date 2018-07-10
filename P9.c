//Mayranna Laizco Araújo Silva 11711EEL011
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Dimensoes{
	float largura, profundidade, altura;
};

struct Produto{
	char nome[64];
	float preco;
	struct Dimensoes dimensoes;
};

void cadastrar(struct Produto Quant[], int i)
{
	printf("Nome: ");
	scanf("%s", Quant[i].nome);getchar();
	printf("Preco: ");
	scanf("%f", &Quant[i].preco);getchar();
	printf("Largura: ");
	scanf("%f", &Quant[i].dimensoes.largura);getchar();
	printf("Profundidade: ");
	scanf("%f", &Quant[i].dimensoes.profundidade);getchar();
	printf("Altura: ");
	scanf("%f", &Quant[i].dimensoes.altura);getchar();
	printf("Produto %d cadastrado com sucesso!\n", i+1);
}

void consultar(struct Produto Quant[], int i)
{
	
	if (strcmp (Quant[i].nome, "") != 0 && (i==0||i==1))
		printf("%s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm\n", Quant[i].nome, Quant[i].preco, +
			+ Quant[i].dimensoes.largura, Quant[i].dimensoes.profundidade, Quant[i].dimensoes.altura);
	else
		printf("Produto nao cadastrado!\n");

}

int main ()
{
	struct Produto Quant[2];
	strcpy(Quant[0].nome, "");
	strcpy(Quant[1].nome, "");
	int op, pro;

	printf("1 - Cadastro\n2 - Consulta\n");

	while(scanf("%d", &op)!=EOF)
	{
		printf("Numero produto: ");
		scanf("%d", &pro);getchar();
		if(op==1)
			cadastrar(Quant, pro-1);
		else if(op==2)
			consultar(Quant, pro-1);
		else
			printf("Entrada invalida!\n");

	}

	return 0;
}
