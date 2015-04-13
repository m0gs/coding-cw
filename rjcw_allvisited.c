//testing with arrays
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int step_direction(int seed);

void main(){
	int seed;
	printf("Please choose a number between one and ten\n");
	scanf("%d",&seed);
	int visited_sites[10]={0,0,0,0,0,0,0,0,0,0};
	int i=0;
	int position = seed;
	int n,all_visited;
	int loops = 0;

	do {
		int step = step_direction(seed);
		position = position + step;
		if (position>10) {position = 1;};
		if (position<1) {position = 10;};

		visited_sites[position-1] = position;

		printf("Position: %d\n", position);

		all_visited = 1;
		for (n=0;n<11;n++){
			if (visited_sites[n]==0){all_visited = 0;};}

		loops++;
	}
	while (all_visited == 0);
	printf("Loops:%d\n",loops);
}

int step_direction(int seed) {
	int a;
	a = (rand());
	a = pow(-1,a);
	return a;}
