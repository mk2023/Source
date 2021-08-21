#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
int arr[1008];
int main()
{
	int n;
	freopen("input-1206.txt", "r", stdin);
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = arr[i]; j > arr[i - 1] && j > arr[i - 2] && j > arr[i + 1] && j > arr[i + 2]; j--)
				sum++;
		}
		printf("#%d %d\n", i+1, sum);
	}
	return 0;
}
#endif