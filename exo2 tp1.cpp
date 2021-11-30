#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void affiche(int *tab, int tailletab);
int main(int argc, char *argv[])
{
	int tab[10] = { 1,2,4,8,16,32,64,128,256,512 };
	affiche(tab, 10);
}

void affiche(int *tab, int tailletab)
{
	int i;
	for (i = 0; i < tailletab; i++)
	{
		printf("la valeur %d est egal a %d \n",i+1, tab[i]);
	}
}
