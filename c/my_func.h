#include <stdio.h>

int get_integer()
{
	int n;

	printf("정수를 입력하세요.: ");
	scanf_s("%d", &n);

	return n;
}