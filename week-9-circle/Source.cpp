#define _CRT_SECURE_NO_WARNINGS
//#define pi 3.14;
#include <stdio.h>

double circle(double *x, double *y)
{
	double pi = 3.14;
	double A1 = pi*(*x)*(*x);
	double A2 = pi*(*y)*(*y);
	double area = A1 - A2;
	printf("%lf", area);
	return area;
}
int main()
{
	double tmp,x[2];
	for (int i = 0; i < 2; i++)
	{
		printf("Enter positive integer : ");
		scanf("%lf", &x[i]);
	}
	if (x[0] > 0 && x[1] > 0)
	{
		if (x[0] < x[1])
		{
			tmp = x[0];
			x[0] = x[1];
			x[1] = tmp;
		}
	}
	else
	{
		printf("Please enter positive integer");
	}
	
	circle(&x[0], &x[1]);
	
	return 0;
}