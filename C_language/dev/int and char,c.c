#include <stdio.h>
int main(void){
	
	char x = 65; /*char는 하나의 문자를 담는 공간*/  /*아스키코드 65는 A도 되고 'A'도 A로 출력됨*/ 
	
	printf("%c\n",x);/*%c는 하나의 캐릭터영역을 출력해줄수있음*/ 
	char y = 65;
	printf("%c\n",y);
	char z = 'B';
	printf("%d\n",z);
	return 0;
}
