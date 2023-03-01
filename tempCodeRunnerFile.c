#include<stdio.h>
#include<math.h>

void powerset(char *set, int set_size){
	unsigned int powersetsize = pow(2,set_size);
	int counter, j;

	for(counter =0; counter<powersetsize; counter++){
		for(j=0;j<set_size;j++){
			if(counter & (1<<j)){
				printf("%c",set[j]);
			}
		}
	}
	printf("\n");
}

int main(){
	char set[] = {'a','b','c'};
	powerset(set, 3);
	return 0;
}