#if 0
#include <iostream>
using namespace std;

long long int a, b, tc, T = 10;
long long int f(long long int a, long long int b)
{
	if (b == 0)return 1;
	return a * f(a, b - 1);
}
int main()
{
	while (T--) {
		cin >> tc >> a >> b;
		cout << '#' << tc << ' ' << f(a, b) << '\n';
	}
}
#endif