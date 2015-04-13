#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int step_direction(int seed);

void main(){
	int seed=4;
	int i;
	int position = seed;
	printf("seed: %d\n", seed);
	
	for(i=0;i<21;i=i+1){
		int step = step_direction(seed);
		position = position + step;

		if (position>10) {position = 1;};
		if (position<1) {position = 10;};

		printf("position: %d\n",position);
		}
}

int step_direction (int seed) {
	int a;
	a = (rand());
	a = pow(-1,a);
	return a;}
