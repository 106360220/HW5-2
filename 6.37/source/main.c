#include <stdlib.h>
#include<stdio.h>
int Max(int a[], int n)
{
	if (n == 1) return a[1];
	else
	{
		int x = Max(a, n - 1);
		if (a[n] > x)
		{
			return a[n];
		}
		else
		{
			return x;
		}
	}
}

int main(int argc, char *argv[])
{
	int array[5] = {10,20,30,40,50};

	printf("%d\n", Max(array, 5));

	system("pause");

	return 0;
}