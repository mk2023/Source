#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int tc, ans;
bool p1, p2;
char a[100][100];

void init() {
	cin >> tc;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			cin >> a[i][j];
	}
}
int f(int N)
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j <= 100 - N; j++)
		{
			p1 = p2 = true;
			for (int k = 0; k < N / 2 && p1; k++)
			{
				if (a[i][j + k] != a[i][j + N - 1 - k])p1 = false;
			}
			for (int k = 0; k < N / 2 && p2; k++)
			{
				if (a[j + k][i] != a[j + N - 1 - k][i]) {
					p2 = false;
				}
			}
			if (p1 || p2)
				return N;
		}
	}
	return 0;
}
int main()
{
	for (tc; tc <= 10; tc++)
	{
		init();
		for (int i = 100; i >= 0; i--)
		{
			ans = f(i);
			if (ans > 0)break;
		}
		cout << '#' << tc << ' ' << ans << '\n';
	}
}
#endif