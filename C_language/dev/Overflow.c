#include <stdio.h>
#include <limits.h>

int main(void){
	
	int x = INT_MAX;
	printf("int���� �ִ� x�� %d�Դϴ�.\n",x);/*Ư���� ������ �������ִ� ������ �Ѿ����� Overflow*/ 
	printf("x+1�� %d�Դϴ�.",x+1); /*�ּڰ�*/ 
	return 0;
}
