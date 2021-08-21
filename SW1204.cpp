#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>
int count[101];
int arr[1000];
int main(void)
{
	int test_case;
	int T, max, answer;
	freopen("input-1204.txt", "r", stdin);
	scanf("%d", &T);

	for (test_case = 1; test_case <= T; ++test_case)
	{
		max = answer = 0;
		memset(arr, 0, sizeof(arr));
		memset(count, 0, sizeof(count));

		//for (int i = 0; i < 1000; i++)
		//{
		//	arr[i] = 0;
		//}
		//for (int i = 0; i <= 100; i++)
		//{
		//	count[i] = 0;
		//}

		for (int i = 0; i < 1000; i++)
		{
			scanf("%d", &arr[i]);
			count[arr[i]]++;
		}

		for (int i = 0; i <= 100; i++)
		{
			if (count[answer] < count[i]) {
				answer = i;
				max = count[i];
				printf("%d %d ", answer, max);
			}
		}
		for (int i = 0; i <= 100; i++)
		{
			if (count[i] == max){
				answer = i;
				//printf("%d ", answer);
			}
		}

		printf("#%d %d\n", test_case, answer);
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int a[1000], T, tc;
int c[101], cnt, mf, idx;

int main()
{
	freopen("input-1204.txt", "r", stdin);
	cin >> tc;
	while (T != tc) {

		cin >> T;
		mf = cnt = idx = 0;
		memset(a, 0, sizeof(a));
		memset(c, 0, sizeof(c));
		for (int i = 0; i < 1000; i++) {
			cin >> a[i];
			c[a[i]]++;
		}
		for (int i = 0; i < 101; i++) {
			if (c[idx] < c[i]) {
				idx = i;
				mf = c[i];
			}
		}
		for (int i = 0; i < 101; i++)
			if (c[i] == mf)
				idx = i;
		cout << '#' << T << ' ' << idx << '\n';
	}
	return 0;
}
#endif