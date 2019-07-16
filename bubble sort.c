#include <stdio.h>

void bubble_sort(int arr[], int count)
{
	int temp;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int num[10] = { 4, 3, 6, 1, 2, 7, 9, 8, 10, 5 };

	bubble_sort(num, sizeof(num) / sizeof(int));

	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
	{
		printf("%d ", num[i]);
	}

	return 0;
}