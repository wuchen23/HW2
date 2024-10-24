#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int side, side2, h;
	for (side = 1; side <= 500; side++)
	{
		for (side2 = side; side2 <=500; side2++)
		{
			for (h = side2; h <= 500; h++)
			{
				if (side * side + side2 * side2 == h * h)
					printf("²¦¤ó¤T¤¸¼Æ:%d,%d,%d\n", side, side2, h);
			}
		}
	}
}