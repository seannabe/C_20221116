#include <stdio.h>
#include <stdlib.h>


//int maximum(int x, int y, int z);

int main(void) {
			
	int k = maximum(2, 3, 1);
	printf("Max:%d", k);
	return 0;
}

int maximum(int x, int y, int z){	
	int max = x;
	
	if(y > max)
		max = y;
	 
	if(z > max)
		max = z;
	return max;
}


