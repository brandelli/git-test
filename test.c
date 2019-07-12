#include<stdio.h>
#include<stdlib.h>
int add(int a, int b, int c){
	printf("Value a: %d \n", a);
	printf("Value b: %d \n", b);
	printf("Value c: %d \n", c);
	return a + b + c;
}

int main(){
	int a = 1;
	int b = 2;
	int c = 3;
	int sum = add(a, b, c);
	printf("Sum = %d \n", sum);
	return 0;
}
