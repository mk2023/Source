#if 0
#define _CRT_NO_SECURE_WARNINGS
##¿Ö Æ²·ÇÁö?

#include <iostream>
#include <vector>
using namespace std;

struct pos {
	int x, y;
	pos() {};
	pos(int x, int y) :x(x), y(y) {}
};
int T = 10, n;
int a[100][100];
vector<pos> N;
vector <pos> S;

void init()
{
	N.clear();
	S.clear();
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 1)N.push_back(pos(i, j));
			else if (a[i][j] == 2)S.push_back(pos(i, j));
		}
	}
}

bool move()
{
	bool ischanged = false;
	for (int i = 0; i < N.size(); i++)
	{
		int x = N[i].x;
		int y = N[i].y;
		if (x == n - 1) {
			ischanged = true;
			a[x][y] = 0;
			N.erase(N.begin() + i--);
			continue;
		}
		if (a[x + 1][y] == 0) {
			ischanged = true;
			a[x + 1][y] = 1;
			a[x][y] = 0;
			++N[i].x;
		}
	}

	for (int i = 0; i < S.size(); i++)
	{
		int x = S[i].x;
		int y = S[i].y;
		if (x == 0) {
			ischanged = true;
			a[x][y] = 0;
			S.erase(S.begin() + i--);
			continue;
		}
		if (a[x - 1][y] == 0) {
			ischanged = true;
			a[x - 1][y] = 1;
			a[x][y] = 0;
			--S[i].x;
		}
	}
	return ischanged;
}

int f()
{
	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j][i] == 1)
			{
				while (a[j][i] == 1) {
					j++;
				}
				if (a[j][i] == 2) {
					ret++;
				}
				j--;
			}
		}
	}
	return ret;
}

int main()
{
	for (int tc = 1; tc <= T; tc++)
	{
		init();
		while (move()) {}
		cout << '#' << tc << ' ' << f() << '\n';
	}
	return 0;
}
#endif