#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];

	printf("첫번째 파일 이름: ");
	scanf("%s", file1);

	printf("두번째 파일 이름: ");
	scanf("%s", file2);

	// 읽기 모드
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		printf("file1 오픈 에러...\n");
		exit(1);
	}

	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		printf("file2 오픈 에러...\n");
		exit(1);
	}

	// 파일 비교

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
		printf("두 파일은 서로 같습니다.\n");

	else
		printf("두 파일은 서로 다릅니다.\n");

	// 파일 닫음
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}