#include <stdio.h>

int main()
{

	int alternativa;
	
	printf("Digite uma das alternativas a seguir: ");
	
	printf("\n\n A - Binario para decimal");
	printf("\n\n B - Binario para hexadecimal");
	printf("\n\n C - Decimal para para binario");
	printf("\n\n D - Decimal para hexadecimal");
	printf("\n\n E - Decimal para octal");
	printf("\n\n F - Hexadecimal para binario");
	printf("\n\n G - Hexadecimal para decimal");
	printf("\n\n H - Octal para decimal");
	
	scanf("%i", &alternativa);
	getchar;
	
	void Binariodecimal ()
   {

		char binario[100];
		unsigned int decimal = 0;
		int i = 0, j;
		printf("\nDigite o bimario:\n\n");
		scanf("%s", &binario);
		j = strlen(binario);
		while(t--)
		{
			if(binario[j] == '0' || binario [t] == '1')
			{
				decimal = decimal + pow(2, i++) + (binario[t] - '0');
			}
		}
		printf("\nO decimal correspondente ao binario e: %u\n\n", decimal);
	}
	
	switch(alternativa)
	{
		case 1:
		Binariodecimal();
		breack;	
	}
	return 0;
}
