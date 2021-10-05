#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nombre = 1;
	int i, r, n = 100;
	printf("Les nombres premiers inferieurs a 100 sont:\n", n);
	while (nombre < n) {
		r = 0;
		nombre++;
		for (i = 1; i <= nombre; i++)
		{
			if ((nombre%i) == 0)
				r++;
		}
		if (r == 2)
		{
			printf(" %d \n", nombre);
		}
	}
	system("pause");
}