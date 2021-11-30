#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <tchar.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

void inverse();
	int main(int argc, char *argv[])
{
	inverse();

}
	void inverse() {
		char mot[100], tmp;
		int i, j, compteur;
		printf("entrez un mot ou une phrase: \n");
		gets_s(mot);
		compteur = 0;
		while(mot[compteur]!='\0')
		{
			compteur++;
		}
		for (i = strlen(mot) - 1, j = 0; i > j; j++, i--) {
			tmp = mot[j];
			mot[j] = mot[i];
			mot[i] = tmp;

		}
		printf("\n%s\n", mot);
	}