#if 0
#include <iostream>
#include <stack>

using namespace std;
int n;
char ch;

bool f(stack<char> &s)
{
	cin >> n;
	while (n--)
	{
		cin >> ch;
		if (!s.empty()) {
			if (s.top() + 2 == ch || s.top() + 1 == ch)
				s.pop(); continue;
		}
		s.push(ch);
	}
	return s.empty() ? 1 : 0;
}

int main()
{
	for (int tc = 1; tc <= 10; tc++)
	{
		stack<char> s;
		cout << '#' << tc << ' ' << f(s) << '\n';
	}
}
#endif