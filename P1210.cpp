#if 0
##¹æ¹ý: stargint from the endpoint and going up

#include <stdio.h>

int Move(int(*root)[100], int x, int y)
{
	if (y == 0) {
		return x;
	}
	root[y][x] = 0;
	if (root[y][x + 1] == 1 && x < 99)
		Move(root, x + 1, y);
	else if (root[y][x - 1] == 1 && x > 0)
		Move(root, x - 1, y);
	else if (root[y - 1][x] == 1 && y > 0)
		Move(root, x, y - 1);
}

int main()
{
	int i, j, t, T;
	int ret;
	int root[100][100];
	for (t = 1; t <= 10; t++)
	{
		scanf("%d", &t);
		for (i = 0; i < 100; i++)
		{
			for (j = 0; j < 100; j++)
				scanf("%d", &root[i][j]);
		}
		for (i = 0; i < 100; i++)
			if (root[99][i] == 2)break;

		ret = Move(root, i, 99);
		printf("#%d ", t);
		printf("%d\n", ret);
	}
}
#endif