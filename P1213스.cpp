#if 0
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int T = 10, tc;
string s, n;

int main()
{
	while (T--)
	{
		cin >> tc >> n >> s;
		int nlen = n.size();
		int slen = s.size();
		int ans = 0;
		for (int i = 0; i < slen; i++)
		{
			int same = 0;
			for (int j = 0; j < nlen; j++)
			{
				if (s[i + j] == n[j])same++;
				else break;
				if (same == nlen)ans++;
			}
		}
		cout << '#' << tc << ' ' << ans << '\n';
	}
}
#endif