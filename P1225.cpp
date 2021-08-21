#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	for (int t = 1; t <= 10; t++)
	{
		queue<int> pass;
		int n;
		scanf("%d", &n);
		int fin_val;
		for (int i = 1; i <= 8; i++)
		{
			int num;
			scanf("%d", &num);
			pass.push(num);
			if (i == 8)fin_val = num;
		}
		bool flag = false;
		while (1)
		{
			for (int i = 1; i <= 5; i++)
			{
				fin_val = pass.front() - i > 0 ? (pass.front() - i) : 0;
				pass.pop();
				pass.push(fin_val);
				if (fin_val <= 0)
				{
					flag = true;
					break;
				}
			}
			if (flag)break;
		}
		printf("#%d ", t);
		while (!pass.empty())
		{
			printf("%d ", pass.front());
			pass.pop();
		}
		printf("\n");
	}
}
#endif