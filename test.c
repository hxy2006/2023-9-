#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	for (i = 1; i < 5; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("min = %d\n", min);

	return 0;
}