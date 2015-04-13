//testing with arrays
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int step_direction(int seed);
int no_loops_to_visit_all(int seed, int position);

void main(){
	int seed;
	printf("Please choose 2 numbers between one and ten\n");
	scanf("%d",&seed);
	int i=0;
	int position;
	scanf("%d",&position);
	int no_loops[100];
	float total=0;
	for(i=0;i<101;i++){no_loops[i]=no_loops_to_visit_all(seed,position);}
	for(i=0;i<101;i++){total = total + no_loops[i];}
	float average;
	average = total/100;
	printf("Average no. loops for this L:%f\n",average);
}

int no_loops_to_visit_all(int seed, int position){
	int all_visited,loops=0;
	int visited_sites[10]={0,0,0,0,0,0,0,0,0,0};
	do {int n;
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
	return loops;
}

int step_direction(int seed) {
	int a;
	a = (rand());
	a = pow(-1,a);
	return a;}
