/* The program receives two variables, x and y, of data type unsigned long.
   It finds and prints the number of bits that are on in the same places in x
   and y. */

#include <stdio.h>
#define MAX_VAL 0xFFFFFFFFUL /* the maximal value for x and y */

unsigned long get_value(int);
int similar_on_bits(unsigned long, unsigned long);

int main(){
	unsigned long x, y;
	int result; /* the value that the program should find and print */
	
	printf("\n PROGRAM INPUT :\n Two non negative integers, x and y");
	printf("\n PROGRAM OUTPUT :\n The number of bits that are on in the same "); 
	printf("places in x and y\n\n");
	
	x = get_value('x');
	y = get_value('y');
		
	printf("\n x = %lu, y = %lu\n", x, y);
	
	result = similar_on_bits(x, y);

	printf(" result: %d\n", result);
	
	return 0;
}
	
/* assums that the input is an integer between 0 - 4294967295 (inclusive) */
unsigned long get_value(int name){
	unsigned long value = 0;
	
	printf(" Please enter the value of %c (0 - %lu inclusive): ", name, 
	       MAX_VAL);
	       
	scanf("%lu",&value);
	
	return value;
}
