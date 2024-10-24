#include<stdio.h>

using namespace std;
int main()
{
	float salary, sale;
	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sale);
	    if (sale == -1)
				break;
		salary = 200 + sale * 0.09;
		printf("Salary is: %.2f\n", salary);
	}
}