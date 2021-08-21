#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int T = 10, N;
char a[8][8];

void init() {
	cin >> N;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			cin >> a[i][j];
	}
}
int f()
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j <= 8 - N; j++)
		{
			bool pal = true;
			for (int k = 0; k < N / 2; k++)
			{
				if (a[i][j + k] != a[i][j + N - 1 - k]) {
					pal = false;
					break;
				}
			}
			if (pal)cnt++;
			pal = true;
			for (int k = 0; k < N / 2; k++)
			{
				if (a[j + k][i] != a[j + N - 1 - k][i])
				{
					pal = false;
					break;
				}
			}
			if (pal) cnt++;
		}
	}
	return cnt;
}
int main()
{
	for (int tc = 1; tc <= T; tc++)
	{
		init();
		cout << '#' << tc << ' ' << f() << '\n';
	}
	return 0;
}
#endif