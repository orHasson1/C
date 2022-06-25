/* The program receives a list of characters (of unknown size), and prints the 
   number of alphanumeric and the total number of characters of the input */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAXLINE 60

/* returns the input and counts the number of alphanumeric and the total number
   of characters of it */
char* getInput(char* input, long *inputLen, long *alnumCounter){
	char c;
	 
	while((c = getchar()) != EOF && c != '\n'){
		input[(*inputLen)++] = c;
		
		if(isalnum(c)){
			(*alnumCounter)++;
		}
		
		if(*inputLen % MAXLINE == 0){
			input = realloc(input, (MAXLINE + *inputLen) * sizeof(char));
		}
	}
	
	input[*inputLen] = '\0';
	return input;
}

int main(){
	int i;
	long inputLen, alnumCounter;
	char* input = (char *) realloc(NULL, MAXLINE * sizeof(char));
	inputLen = alnumCounter = 0;  
	
	
	printf(" Please enter a list of characters.\n\n");
	input = getInput(input, &inputLen, &alnumCounter); 
	
	printf("\n Input:");
	for(i = 0; i < inputLen; i += MAXLINE){
		printf("\n	%.*s", MAXLINE, input + i);
	}
	
	free(input);
	
	printf("\n\n Total Length - %lu\n", inputLen);
	printf(" Number Of Alphanumeric Characters - %lu\n", alnumCounter);         
	
	return 0;
}
