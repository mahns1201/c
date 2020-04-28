#include <stdio.h>

int my_sum(int min, int max)
{
	int sum = 0;
	
	for (int i = min; i <= max; i++)
		sum += i;
	
	return sum;
}

int main(void)
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	int sum = my_sum(num1, num2);
	printf("ÇÕ°è = %d\n", sum);

	return 0;
}