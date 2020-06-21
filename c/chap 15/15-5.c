#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct
{
	char name[20];
	int kor, eng, math;
}STUDENT;

int main(void)
{
	FILE *fpin, *fpout;
	STUDENT st;

	fpin = fopen("data.txt", "r");
	if (fpin == NULL)
	{
		printf("파일 열기 실패\n");
		return 0;
	}

	fpout = fopen("data_avg.txt", "w");
	if (fpout == NULL)
	{
		printf("쓰기 열기 실패\n");
		return 0;
	}

	while (fscanf_s(fpin, "%s", st.name, sizeof(st.name)) != EOF)
	{
		fscanf_s(fpin, "%d %d %d", &st.kor, &st.math, &st.eng);
		fprintf(fpout, "%s", st.name);
		fprintf(fpout, "%10.2f\n", (st.kor + st.math + st.eng) / 3.0);
	}

	fclose(fpin);
	fclose(fpout);
	return 0;
}