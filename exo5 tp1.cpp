#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


long calcul(int n)
{
	int i;
	long fact = 1;

	for (i = 1; i <= n; i++)
		fact = fact * i;
	
	return fact;

}
int main()
{
	int user;
	printf("entrez un nombre \n");
	scanf("%d", &user);
	printf("\n%d!=%ld\n", user, calcul(user));
	return 0;
}