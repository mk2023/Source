#if 0
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

bool c[100];
vector<int> a[100];
int tc, T = 10, N;

void init()
{
	memset(c, 0, sizeof(c));
	for (int i = 0; i < 100; i++)a[i].clear();
	cin >> tc >> N;
	for (int i = 0; i < N; i++)
	{
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
	}
}

bool bfs(int start)
{
	queue<int> q;
	q.push(start);
	c[start] = 1;
	while (!q.empty()) {
		int now = q.front();
		if (now == 99)return true;
		q.pop();
		for (int i = 0; i < a[now].size(); i++)
		{
			int next = a[now][i];
			if (c[next] == 0) {
				c[next] = 1;
				q.push(next);
			}
		}
	}
	return false; 
}
int main()
{
	while (T--)
	{
		init();
		cout << '#' << tc << ' ' << bfs(0) << '\n';
	}
	return 0;
}
