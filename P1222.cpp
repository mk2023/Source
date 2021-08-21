#if 0
#include <stdio.h>
char a;
char str[1000];
int n;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		scanf("%s", str);
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (str[j] != 43) {
				sum = sum + (str[j] - 48);
			}
		}
		printf("#%d %d\n", i, sum);
	}
}
#endif