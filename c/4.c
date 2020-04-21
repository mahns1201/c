#include <stdio.h>
#include "my_func.h"

int get_sum(int n1, int n2)
{
	int sum = n1 + n2;
	
	return sum;
}

int main()
{
	int n1 = get_integer();
	int n2 = get_integer();

	int sum = get_sum(n1, n2);	
	printf("두 수의 합은 %d\n", sum);

	return 0;
}