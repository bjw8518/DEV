#include <stdio.h>
#include <limits.h>

int main(void){
	
	int x = INT_MAX;
	printf("int형의 최댓값 x는 %d입니다.\n",x);/*특정한 변수가 가질수있는 범위를 넘었을때 Overflow*/ 
	printf("x+1은 %d입니다.",x+1); /*최솟값*/ 
	return 0;
}
