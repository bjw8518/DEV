#include <stdio.h>
#define N 10

int main (void){
	
	int i,j;
	for(i = 0; i < N; i++) /*초기값; 비교; 증감 */
	{
		for(j = 0; j < N; j++)
		{
			printf("★");
		}
		printf("\n");
	}
	return 0;
}
