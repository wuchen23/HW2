#include<stdio.h>

using namespace std;

int main()
{
	char sign = '+';
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if ((i == 0) || (i == 2) || (j == 11) || (j == 0))
			{
				printf("%c", sign);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}