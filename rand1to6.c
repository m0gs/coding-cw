#include<stdio.h>
#include<math.h>

void main() {
	int a;
	int seed = 3;
	a = (rand());
	//a = pow(-1,a);
	a = a % 6;
	printf("%d\n", a);}
