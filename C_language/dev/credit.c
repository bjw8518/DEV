#include <stdio.h>

int main (void){
	
	int score;
	printf("�����Է�");
	scanf("%d",&score);
	if (score >= 90)/*score�� 90���� ũ�ų� ������*/
	{ 
	printf("����� ������ A�Դϴ�");
	}
	else if (score >= 80)/*score�� 80���� ũ�ų� ������*/
	{
	printf("����� ������ B�Դϴ�");
	}
	else if (score >= 70)/*score�� 70���� ũ�ų� ������*/
	{ 
	printf("����� ������ C�Դϴ�");
	}
	else /*�ƹ��͵� �ش���� ������*/
	{
	printf("����� ������ F �Դϴ�");
	}
	return 0;
}
