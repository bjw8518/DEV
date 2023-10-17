#include <stdio.h>
#define MONTHS 12 
/*상수에 대한 정의를 해준다*/
int main(void)
{
	
	double monthSalary = 1000.5;
	printf("$ %.2f",monthSalary * MONTHS);
	return 0;
}
