#include <stdio.h>

int main (void){
	
	int x = 50,y = 30;
	printf("x가 y보다 크고 y는 40미만입니까?%d\n",(x > y) && (y < 40)); //&& and
	printf("x가 y보다 작거나 혹은 y는 30미만입니까?%d\n",(x < y) || (y == 30)); // || OR
	printf("x가 50이 아닙니까?%d\n",x != 50);//x가 50이 아니면 트루값  != NOT
	return 0;
}
