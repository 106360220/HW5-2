#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int search, ans;
	int data[] = { 0,2,4,6,8,10,12,14,16,18,20,22,24,26,28 };
	printf("Enter a number between 0 and 28:");
	scanf("%d", &search);

	// ©I¥s¨ç¦¡¶i¦æ·j´M
	ans = binarysearch(data, search, sizeof(data) / sizeof(int));

	if (ans < 0)
	{
		printf("%d not found\n", search);
	}
	else
	{
		printf("%d found in array element %d\n", search,ans);
	}

	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (data[mid] == search)
		{
			return mid;
		}
		else if (data[mid] > search)
		{
			high = mid - 1;
		}
		else if (data[mid] < search)
		{
			low = mid + 1;
		}
	}

	return -1;
}