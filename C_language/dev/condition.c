#include <stdio.h>
int main (void){
	
	int x = -50,y = 30;
	int absoluteX = (x > 0) ? x : -x;//--이면 +가 된다 
	/*absoluteX항상 절대값을 반환 (x > 0) x가 클때는  x : -x;에서 좌항을 출력하고 작을땐 -x(우항)을 출력한다*/
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	printf("x의 절대값은 %d입니다.\n", absoluteX);
	printf("x와 y중에서 최댓값은 %d입니다.\n", max);
	printf("x와 y중에서 최초값은 %d입니다.\n", min);
	return 0;
}
