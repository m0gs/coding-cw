#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int step_direction(int seed);
int no_loops_to_visit_all(int seed, int position, int L);

void main(){
	int seed, position,i;
	printf("Please choose 2 numbers between one and ten\n");
	scanf("%d",&seed);
	scanf("%d",&position);
	float average;
	int L=1;

	for(L=1;L<100;L++){
		float total=0;
		for(i=0;i<101;i++){total = total+no_loops_to_visit_all(seed,position,L);}
		average = total/100;
		printf("Average no. loops for %d sites:%f\n",L, average);
}}

int no_loops_to_visit_all(int seed, int position, int L){
	int all_visited,loops=0;
	int visited_sites[100];
	int j;
	for(j=0;j<(L+1);j++){visited_sites[j]=0;}
	do {int n;
		int step = step_direction(seed);
		position = position + step;
		if (position>(L+1)) {position = 1;};
		if (position<1) {position = L;};

		visited_sites[position-1] = position;

		//printf("Position: %d\n", position);

		all_visited = 1;
		for (n=0;n<L;n++){
			if (visited_sites[n]==0){all_visited = 0;};}
		loops++;
	}
	while (all_visited == 0);
	//printf("Loops:%d\n",loops);
	return loops;
}

int step_direction(int seed) {
	int a;
	a = (rand());
	a = pow(-1,a);
	return a;}
