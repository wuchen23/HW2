#include<stdio.h>

using namespace std;
int main()
{
	float principal, rate,interest;
	int day;
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &principal);
		if (principal == -1)
			break;
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &day);
		interest = principal * rate * day / 365;
		printf("The interest charge is $%.2f\n\n", interest);
	}
	return 0;
}