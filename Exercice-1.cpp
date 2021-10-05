#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, tab[10];
	int nbr = 10;

	for (i = 0; i < nbr; ++i)
	{
		printf("Entrer le nombre %d: ", i + 1);
		scanf("%d", &tab[i]);
	}

	for (i = 1; i < nbr; ++i)
	{
		if (tab[0] > tab[i])
			tab[0] = tab[i];
	}
	printf("n\ Le plus petit element est %d", tab[0]);
	for (i = 1; i < nbr; ++i)
	{
		if (tab[0] < tab[i])
			tab[0] = tab[i];
	}
	printf("n\ Le plus grnad element est %d", tab[0]);

	return 0;
}