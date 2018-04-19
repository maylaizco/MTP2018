#include <stdio.h>

int main ()
{
	int est = 0, i = 0;
	char bits[256];
	scanf("%s", &bits[i]);
	while (bits[i]!= '\0')
	{
		if (est == 0 && bits [i] == '0')
		{
			est = 0;
		}
		else if (est == 0 && bits [i] == '1')
		{
			est = 1;	
		}
		else if (est == 1 && bits [i] == '0')
		{
			est = 2;	
		}
		else if (est == 2 && bits [i] == '1')
		{
			est = est;	
		}
		else if (est == 2 && bits [i] == '0')
		{
			est = 1;	
		}
		else if (est == 1 && bits [i] == '1')
		{
			est = 0;	
		}
		else
		{
			est = est;
		}
		i++;
	
	}
	if (est == 0)
	{
		printf("\nE multiplo de 3. \n\n");
	}
		if (est != 0)
	{
		printf("\nNao e multiplo de 3. \n\n");
	}
	printf("\nA sequencia original e: %s\n\n", bits);
	printf("\nO estado e igual a: %d\n\n", est);
	
	return 0;
}
