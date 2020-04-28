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

	srand((unsigned)time(NULL));	// 난수 발생기의 seed를 설정.
									// 일반적으로 현재의 시각을 시드로 사용.

	for (toss = 0; toss < 100000; toss++)
	{
		if (coin_toss() == 1)
			heads++;

		else
			tails++;
	}
	printf("동전의 앞면: %d\n", heads);
	printf("동전의 뒷면: %d\n", tails);

	return 0;
}