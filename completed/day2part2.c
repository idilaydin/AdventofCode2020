#include <stdio.h> 
#include <string.h>


int main() {
	FILE *passwords = fopen("day2input.txt", "r");
	
	char line[100];
	// splitting into characters, reading line by line
	char * delims = " -:";
	char *token;	
	int valid=0;
	while (fgets(line, sizeof(line), passwords)) {
		int i=0; // indexing for what the different tokens in the line are
		int count=0;
		token=strtok(line,delims); 
		char *start;
		char *end;
		char letter;
		char *string;
		while (token!=NULL) {
			switch(i) {
				case 0:
					start = token; 
				case 1: 
					end = token; 
				case 2: 
					letter = *token; 
				case 3: 
					string = token;
			}
			i++;
			token = strtok (NULL,delims);
		}	
		// counting number of characters in the string
		int intstart,intend;
        sscanf(start, "%d",&intstart);
        sscanf(end, "%d",&intend);
		if ((string[intstart-1] == letter) || (string[intend-1] == letter)){
				valid++;
					if ((string[intstart-1] == letter) && (string[intend-1] == letter)){
						valid--;
					}
		}
	}
	printf ("%d\n",valid);
	fclose(passwords);
}
