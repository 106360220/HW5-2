#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
int main(void)
{
	srand(time(NULL));
	int k, i, j;
	int num[11] = {0};

	for (k = 0; k<36000; k++)
	{
		j = (rand() % 6) + 1;
		i = (rand() % 6) + 1;
		num[i + j - 2]++;
	}
	printf("Sum\tTotal\n");
	for (k = 0, i = 0, j = 0; k<11; k++)
	{
		if (j<6)i++, j++;
		else i--;
		printf("%d\t%d\n", k + 2, num[k]);
	}
	system("pause");
	return 0;
}