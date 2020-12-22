#include <stdio.h>
#include <string.h>

int main () {
	FILE* file = fopen("day3input.txt","r"); 

	char line[1000];
	int position=0;
	int trees=0;
	int linenum=0;
	while (fgets(line,sizeof(line),file)) {
		// skip first line
		if (linenum==0 || (linenum+1)%2==0) {
			if (position > 30) {
            	position=(position-30);
        	} else {
            	position = position +1;
			}
            linenum++;
            continue;
        }
		// end skip 
		if (position > 30) {
			position=(position-31);
		}

		if ('#' == line[position]) {
			trees++;
		}	

		position = position + 1;
		linenum++;
	}
	printf("%d\n",trees);
	fclose(file);
}
