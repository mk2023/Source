#if 0
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

struct pos {
	int x, y;
	pos() {}
	pos(int x, int y) :x(x), y(y) {}
};

int T = 10, t;
char a[16][16];
int d[16][16];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
pos startp;
pos endp;

void init()
{
	memset(d, -1, sizeof(d));
	cin >> t;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == '2') {
				d[i][j] = 0;
				startp = pos(i, j);
			}
			else if (a[i][j] == '3')endp = pos(i, j);
		}
	}
	return;
}
int bfs(pos now)
{
	queue<pos> q;
	q.push(now);
	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (nx >= 0 && nx < 16 && ny >= 0 && ny < 16) {
				if (a[nx][ny] != '1' && d[nx][ny] == -1)
				{
					d[nx][ny] = d[x][y] + 1;
					q.push(pos(nx, ny));
				}
			}
		}
	}
	return d[endp.x][endp.y] != -1 ? 1 : 0;
}
int main()
{
	{
		while (T--) {
			init();
			cout << '#' << t << ' ' << bfs(startp) << '\n';
		}
	}
	return 0;
}
#endif
