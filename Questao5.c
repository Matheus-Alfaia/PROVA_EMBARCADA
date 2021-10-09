#include<stdio.h>
#include<stdlib.h>

int main(){
	int A,B,X;

	A = 0;
	B = 0;
	X = !(!(A&&B));
	printf("NOT(NOT(A AND B))(quando A=0 e B=0):%d  ",X);

	A = 0;
	B = 1;
	X = !(!(A&&B));
	printf("NOT(NOT(A AND B))(quando A=0 e B=1):%d  ",X);

	A = 1;
	B = 0;
	X = !(!(A&&B));
	printf("NOT(NOT(A AND B))(quando A=1 e B=0):%d  ",X);

	A = 1;
	B = 1;
	X = !(!(A&&B));
	printf("NOT(NOT(A AND B))(quando A=1 e B=1):%d  ",X);
}
