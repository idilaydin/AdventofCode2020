#include <stdio.h>

int main () {
	FILE * input = fopen("input.txt","r");
	int arr[200];
	int i=0;
	while(!feof(input)) {
		fscanf(input, "%d",&arr[i]);
		i++;
	}

	for (int j=0; j<i-2; j++) {
		for (int k=j+1; k<i-1; k++) {
			for (int x=k+1; x<i; x++) {
				if (arr[j]+arr[k]+arr[x] == 2020) {
					printf("The three numbers are %d, %d, %d\n",arr[j], arr[k], arr[x]);
				}
			}
		}
	}
 
}
