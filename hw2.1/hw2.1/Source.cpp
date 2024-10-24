#include<stdio.h>
#include<iostream>

using namespace std;
int main(void)
{
	int account=0;
	float balance, charges, credits, limit, Newbalance;
	while (1)
	{
		printf("\nEnter account number (-1 to end): ");
		scanf_s("%d", &account);
		if (account == -1)
			break;
		printf("Enter beginning balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);
		Newbalance = balance + charges - credits;
		if (Newbalance > limit)
		{
			printf("Account:      %d \n", account);
			printf("Credit limit: %.2f \n", limit);
			printf("Balance:      %.2f \n", Newbalance);
			printf("Credit Limit Exceeded. \n ");
		}
	}
	return 0;
}