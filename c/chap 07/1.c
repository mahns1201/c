#include <stdio.h>
#include <limits.h>

int main(void)
{
	int number, min_value = INT_MAX; //������ ǥ���� �� �ִ� �ִ밪�� ��Ÿ��.
	
	printf("������ �Է��Ͻÿ�\n����� Ctrl + Z\n");
	
	while (scanf_s("%d", &number) != EOF)
	{
		if (number < min_value)
			min_value = number;
	}
	printf("�ּҰ��� %d", min_value);
	
	return 0;
}