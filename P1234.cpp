#if 0
#include <stdio.h>
#include <string.h>
#define N 100

void PassWord(char *arr, int n)
{
	int i, c = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			i++;
			continue;
		}
		arr[c] = arr[i];
		c++;
	}
	arr[c] = arr[i];
	if (c == i) {
		for (i = 0; i < c; i++)printf("%c", arr[i]);
		printf("\n");
		return;
	}
	PassWord(arr, c);
}
int main()
{
	int test_case, n;
	char arr[N];
	int i, j;
	int temp;
	for (test_case = 0; test_case < 10; test_case++)
	{
		memset(arr, 0, N);
		scanf("%d", &n);
		scanf("%s", arr);

		printf("#%d ", test_case + 1);
		PassWord(arr, n);
	}
	return 0;
}
#endif