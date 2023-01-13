#include <stdio.h>

int main (void){
	
	int score;
	printf("정수입력");
	scanf("%d",&score);
	if (score >= 90)/*score가 90보다 크거나 같을때*/
	{ 
	printf("당신의 학점은 A입니다");
	}
	else if (score >= 80)/*score가 80보다 크거나 같을때*/
	{
	printf("당신의 학점은 B입니다");
	}
	else if (score >= 70)/*score가 70보다 크거나 같을때*/
	{ 
	printf("당신의 학점은 C입니다");
	}
	else /*아무것도 해당되지 않을때*/
	{
	printf("당신의 학점은 F 입니다");
	}
	return 0;
}
