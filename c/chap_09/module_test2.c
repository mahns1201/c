#include <stdio.h>

//static int score;    2�� ���� �˾Ƴ���      
extern int score;    //extern�� �� ������ �⺻���� ����ȴ�.
void add_score()    //�Լ� �տ��� static�� ������ static void add_score()��� �� �� �ִ�.
{
	score += 5;
	printf("add_score = %d\n", score);
}