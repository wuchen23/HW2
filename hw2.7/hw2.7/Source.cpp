#include<stdio.h>

using namespace std;
int main()
{
	int i, j,a;
	char sign = '*';
	char sign2 = ' ';
	printf("(a)\n");
	for (i = 1; i <=10; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("\n(b)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 11-i; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("\n(c)\n");
	for (i = 1; i <= 10; i++)
	{
		for (a = 1; a < i; a++)
		{
			printf("%c", sign2);
		}
		for (j = 1; j <= 11 - i; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("\n(d)\n");
	for (i = 1; i <= 10; i++)
	{
		for (a = 1; a < 11-i; a++)
		{
			printf("%c", sign2);
		}
		for (j = 1; j <= i; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
}