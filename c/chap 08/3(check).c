#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);

int coin_toss(void)
{
	int i = rand() % 2;
	if (i == 0)
		return 0;

	else
		return 1;
}

int main(void)
{
	int toss;
	int heads = 0;
	int tails = 0;

	srand((unsigned)time(NULL));	// ���� �߻����� seed�� ����.
									// �Ϲ������� ������ �ð��� �õ�� ���.

	for (toss = 0; toss < 100000; toss++)
	{
		if (coin_toss() == 1)
			heads++;

		else
			tails++;
	}
	printf("������ �ո�: %d\n", heads);
	printf("������ �޸�: %d\n", tails);

	return 0;
}