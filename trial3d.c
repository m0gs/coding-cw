#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int step_direction(int seed);

void main(){
	int seed;
	scanf("%d",&seed);
	int i;
	int position = seed;
	printf("seed: %d\n", seed);
	
	for(i=0;i<21;i=i+1){
		int step = step_direction(seed);
		if (step == 1){positionx = positionx - 1;};
		if (step == 2){positionz = positionz - 1;};
		if (step == 3){positiony = positiony - 1;};
		if (step == 4){positionx = positionx + 1;};
		if (step == 5){positiony = positiony + 1;};
		if (step == 6){positionz = positionz + 1;};

		
		if (positionx>10) {positionx = 1;};
		if (positionx<1) {positionx = 10;};
		if (positiony>10) {positiony = 1;};
		if (positiony<1) {positiony = 10;};
		if (positionz>10) {positionz = 1;};
		if (positionz<1) {positionz = 10;};

		printf("position: %d,%d,%d\n",positionx, positiony, positionz);
		}
}

int step_direction (int seed) {
	int a;
	a = (rand());
	//a = pow(-1,a);
	a = rand % 7;
	return a;}
