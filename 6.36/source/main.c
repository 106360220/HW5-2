#include <stdlib.h> 
#include<stdio.h>
#include <string.h> 

int main(void)
{
	char a[100];
	int i = 0;
	for (i = 0; i<100; i++)
	{
		scanf("%c", &a[i]);
		if (a[i] == '\n')
			break;
	}
	for (; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
		
	printf("\n");
	system("pause");
}