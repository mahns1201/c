#include <stdio.h>

//static int score;    2개 차이 알아놓자      
extern int score;    //extern을 안 붙혀도 기본으로 적용된다.
void add_score()    //함수 앞에도 static을 붙혀서 static void add_score()라고 쓸 수 있다.
{
	score += 5;
	printf("add_score = %d\n", score);
}