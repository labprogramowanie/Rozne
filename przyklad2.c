#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
int ZwrocLpLn(int* x, int n)
{
	int i, lp, ln;
	i = n - 1;
	lp = 0;
	ln = 0;
	while (i >= 0)
	{
		if (x[i] % 2 == 1)
		{
			ln = ln + 1;
		}
		else
		{
			lp = lp + 1;
		}

		i = i - 1;
	}
	if (ln > lp)
	{
		return (-1);
	}
	else
	{
		if (ln == lp)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
void main()
{
	int n;
	int* x;
	printf("Podaj liczbe n: \n");
	scanf("%i", &n);
	x = malloc(sizeof(int)*n);
	int i;
	i = 0;
	do
	{
		printf("Podaj elementy tablicy: ");
		scanf("%i", &x[i]);
		if (x[i]<0)
		{
			x[i] = x[i] * (-1);
		}
		i = i + 1;
	} while (i < n);

		printf("Wynik funkcji: %i",ZwrocLpLn(x, n));
		free(x);


}
