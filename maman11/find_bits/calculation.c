/* finds and returns the number of bits that are on in the same places in x and
   y */
int similar_on_bits(unsigned long x, unsigned long y){
	int counter = 0;
	
	while(x != 0 && y != 0){
		if(((x & 1) == 1) && ((y & 1) == 1)){
			counter++;
		} 
			
		x = x >> 1;
		y = y >> 1;
	}
		
	return counter;
}
