#include <stdio.h>

int main(void){
	
	int x = 100;
	printf("���� x�� ���� %d�Դϴ�\n",x);
	x += 50; //x = x + 50;
	printf("���� x�� ���� %d�Դϴ�\n",x);
	x -= 50; //x = x - 50;
	printf("���� x�� ���� %d�Դϴ�\n",x);
	x *= 50; //x = x * 50;
	printf("���� x�� ���� %d�Դϴ�\n",x);
	x /= 50; //x = x / 50;
	printf("���� x�� ���� %d�Դϴ�\n",x);
	x %= 3; //x = 3 / 50;
	printf("���� x�� ���� %d�Դϴ�\n",x);
	return 0;
}
