/* calculates and returns the scalar pruduct of two vectors, u and v, of the 
   same given length (assums that the scalar pruduct is between 
   -2147483647 - 2147483647) */  
long scalar_product(int uScalar[], int vScalar[], int length){
	int i;
	long result = 0;
	
	for(i = 0; i < length; i++){
		result += uScalar[i] * vScalar[i];
	}
	
	return result;
}
