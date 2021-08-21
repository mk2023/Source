#if 0
#include <stdio.h>
#include <stack>
using namespace std;

char str[1000];
int n, k;
stack<int> s;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		scanf("%s", str);
		
		for (int j = 0; j < n; j++)
		{
			if (k == 1) {
				int t = s.top();
				s.pop();
				s.push(t * (str[j] - 48));
				k = 0; 
				continue;
			}
			if (str[j] == 42) k = 1;
			else if (str[j] > 43)s.push(str[j] - 48);
			
		}
		int sum = 0;
		while (!s.empty()) {
			int a = s.top();
			s.pop();
			sum += a;
		}
		printf("#%d %d\n", i, sum);
	}
}
#endif