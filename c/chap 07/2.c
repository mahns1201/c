#include <stdio.h>

int main()
{
	int i, j, k;
	k = 0;
	for (i = 0; i < 5; i++)
	{
		if (i % 2 == 1)
			continue;
		if (k == 10)
			break;
		for (j = 0; j < 5; j++)
		{
			if (i * j > 10)
				break;
			k++;
		}
	}
}