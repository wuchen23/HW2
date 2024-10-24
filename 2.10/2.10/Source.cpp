#include<stdio.h>

using namespace std;
int main()
{
	int i, j;
	char sign = '*';
	char sign2 = ' ';
	for (i = 0; i < 5; i++)
	{
		for (j = 4; j > i; j--)
		{
			printf("%c", sign2);
		}
		for (j = 1; j <= (2 * i + 1); j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%c", sign2);
		}
		for (j = 7; j >= (2 * i + 1); j--)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
}