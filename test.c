#include<stdio.h>
#include<stdlib.h>
int add(int a, int b){
	printf("Value a: %d \n", a);
	printf("Value b: %d \n", b);
	return a + b;
}

int main(){
	int a = 1;
	int b = 2;
	add(a, b);
	return 0;
}
