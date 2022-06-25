/* The program receives from stdin an integer n, and two vectors of integers,
   u = (u1,...un), and v = (v1,...,vn) and calculates the scalar product of 
   them.
*/ 
     
#include <stdio.h>
#define MAX_LEN 100 /* the maximal length of u and v */

void get_vector(int, int, int[]);
int get_length();
long scalar_product(int[], int[], int);

int main(){
	long result; /* the scalar product of u and v */
	int length = 0; /* the length of u and v */
	int uScalar[MAX_LEN] = {0}, vScalar[MAX_LEN] = {0}; 

	printf("\n PROGRAM INPUT :\n A length of a vector and two vectors of ");
	printf("integers (u and v) of the given length\n");
	printf("\n PROGRAM OUTPUT :\n The scalar product of u and v\n");
	 
	length = get_length();
	get_vector('u', length, uScalar);
	get_vector('v', length, vScalar);
	
	result = scalar_product(uScalar, vScalar, length);
	
	printf("\n The scalar product of u and v is %ld\n", result);
	
	return 0;
}

/* assumes that the input is an integer in the range 1-100 (inclusive) */
int get_length(){
	int input;
	
	printf("\n Please enter the desired length (1 - %d inclusive):\n length = ", 
	       MAX_LEN);
	scanf("%d", &input);
	
	return input;
}

/* assumes that the input is n integers separated by spaces (n = length) */
void get_vector(int name, int length, int values[]){
	int i;
	
	printf("\n Please enter the values of vector %c separated by spaces: "
	       , name);
	printf("\n %c = ", name);
	       
	for(i = 0; i < length; i++){
		scanf("%d", &values[i]);
	}
}
