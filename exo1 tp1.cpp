#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int puissance(int, int);

int puissance(int a, int n)
{
	if (n == 0)
		return(1);
	return(a*puissance(a, n - 1));
}

int main()
{
	int a,b;
printf("entrez une valeura:\n");
scanf("%d", &a);
printf("\entrez une valeurb:\n");
scanf("%d", &b);
printf("\n Le résultat est :\n %d \n", puissance(a, b));
}