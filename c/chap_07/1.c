#include <stdio.h>
#include <limits.h>

int main(void)
{
	int number, min_value = INT_MAX; //정수가 표현할 수 있는 최대값을 나타냄.
	
	printf("정수를 입력하시오\n종료는 Ctrl + Z\n");
	
	while (scanf_s("%d", &number) != EOF)
	{
		if (number < min_value)
			min_value = number;
	}
	printf("최소값은 %d", min_value);
	
	return 0;
}