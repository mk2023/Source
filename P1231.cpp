#define _CRT_SECURE_NO_WARNINGS
//왜 틀리지?
#if 0
#include <stdio.h>
int strlen(char*p)
{
	int len = 0;
	while (p[len++]);
	return len - 1;
}

struct Node {
	char ch;
	int child1;
	int child2;
}node[10000];

void back(int idx) {
	if (node[idx].ch == 0)
		return;
	back(node[idx].child1);
	printf("%c", node[idx].ch);
	back(node[idx].child2);
}

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		int N;
		scanf("%d\n", &N);
		for (int j = 1; j <= N; j++)
		{
			char data[100] = "";
			node[j].ch = node[j].child1 = node[j].child2 = 0;
			gets_s(data, sizeof(data));
			char *p = data;
			p += 2;
			if (j >= 10)
				p++;

			sscanf(p, "%c", &node[j].ch);
			p += 2;
			sscanf(p, "%d %d", &node[j].child1, &node[j].child2);
			
		}
		printf("#%d ", i);
		back(1);
		printf("\n");
	}
	
}
#endif