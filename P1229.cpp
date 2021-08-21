#if 0
#include <stdio.h>
#include <string.h>

void shift(char(*str)[7], int pos, int cnt)
{
	int i, start, last;
	start = pos + cnt;
	if (pos > 10 || start > 9)return;
	for (i = 9; i > start - 1; i--)strcpy(str[i], str[i - cnt]);
}

int main()
{
	char c[2];
	int t, a, b;
	int i, j, q, pos, cnt;
	char first[21][7], cmd[11][7];

	for (t = 1; t <= 10; t++)
	{
		scanf("%d", &a);
		for (i = 1; i < a; i++)scanf("%s", first[i]);
		scanf("%d", &b);
		for (i = 0; i < b; i++)
		{
			scanf("%s%d%d", c, &pos, &cnt);
			shift(first, pos, cnt);
			for (j = 0; j < cnt; j++)
			{
				scanf("%s", cmd[j]);
				if (pos + j > 9)continue;
				strcpy(first[pos + j], cmd[j]);
			}
		}
		printf("#%d ", t);
		for (i = 0; i < 10; i++)printf("%s ", first[i]);
		printf("\n");
	}
	return 0;
}
#endif