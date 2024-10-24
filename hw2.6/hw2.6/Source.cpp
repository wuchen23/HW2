#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double principal = 5000.00;
	int years = 15;
	double rate;
	for (rate = 10.0; rate <= 12.0; rate += 0.5)
	{
		double amount = principal * pow(1 + rate / 100, years);
		printf("利率%.1f時,%d年後的金額為:%.2f 美元\n", rate, years, amount);

	}
	return 0;
}
