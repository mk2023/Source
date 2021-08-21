#if 0
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int T = 10, N;
string tc, s;
int cnt[10];
char a[10][5] = { "ZRO ", "ONE ", "TWO ","THR ", "FOR ", "FIV ", "SIX ", "SVN ", "EGT ", "NIN "};
void init()
{
	memset(cnt, 0, sizeof(cnt));
	cin >> tc >> N;
	for (int i = 0; i<N; i++)
	{
		cin >> s;
		if (s[0] == 'Z')cnt[0]++;
		else if (s[0] == 'O')cnt[1]++;
		else if (s[0] == 'T') {
			if (s[1] == 'W')
				cnt[2]++;
			else
				cnt[3]++;
		}
		else if (s[0] == 'F')s[1] == 'O' ? cnt[4]++ : cnt[5]++;
		else if (s[0] == 'S')s[1] == 'I' ? cnt[6]++ : cnt[7]++;
		else s[0] == 'E' ? cnt[8]++ : cnt[9]++;
	}
}
void f()
{
	for (int i = 0; i < 10; i++)
		while (cnt[i]--)cout << a[i];
	cout << '\n';
}

int main() {
	cin >> T;
	while (T--) {
		init();
		cout << tc << '\n';
		f();
	}
}

#endif