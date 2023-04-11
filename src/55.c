#include<stdio.h>

int main(){
	
	int a = 3;
	a = a + 6;
	
	if(a>5) {
		printf("%d\n", a);
		printf("조건이 참일을 때, 실행 \n");

	}else {
		printf("%d\n, 실행 \n");
		printf("조건이 거짓일 때, 실행 \n");
	}
	return 0;
}