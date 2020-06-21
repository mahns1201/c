#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];

	printf("ù��° ���� �̸�: ");
	scanf("%s", file1);

	printf("�ι�° ���� �̸�: ");
	scanf("%s", file2);

	// �б� ���
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		printf("file1 ���� ����...\n");
		exit(1);
	}

	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		printf("file2 ���� ����...\n");
		exit(1);
	}

	// ���� ��

	int same = 1;

	while (1) {
		int c1 = fgetc(fp1);
		int c2 = fgetc(fp2);

		if (c1 != c2)
		{
			same = 0;
			break;
		}
		
		if (c1 == EOF || c2 == EOF)
			break;
	}
	if (same)
		printf("�� ������ ���� �����ϴ�.\n");

	else
		printf("�� ������ ���� �ٸ��ϴ�.\n");

	// ���� ����
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}