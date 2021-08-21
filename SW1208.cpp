#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
int arr[1005];

int main()
{
	//freopen("input-1208.txt", "r", stdin);
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < 100; j++)
			scanf("%d", &arr[j]);
		sort(arr, arr + 100);
		for (int j = 0; j < n; j++)
		{
			arr[99]--;
			arr[0]++;
			sort(arr, arr + 100);
		}
		printf("#%d %d\n", i + 1, arr[99] - arr[0]);
	}
}
#endif