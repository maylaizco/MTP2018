//Mayranna Laizco Araújo Silva 11711EEL011

#include <stdio.h>

int A(int m, int n)

{

    if (m==0)

        return n+1;

    else if (m>0 && n==0)

        return A(m-1, 1);

    else if (m>0 && n>0)

        return A(m-1, A(m, n-1));

}

int main ()

{

	int n=0, m=0;

	printf("Valores para n e m:\n");

	scanf("%d %d", &m, &n);

	printf("%d", A(m, n));

	return 0;

}
