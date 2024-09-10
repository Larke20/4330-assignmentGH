#include <stdlib.h>
#include <stdio.h>

int sum(int a, int b){
	int result;
	result = a + b;

	return result;
}
int main(int argc, char* argv[]){
	int res;
	res = sum(3,4);
	
	printf("The sum of the two values is: %d.\n", res);
	return 0;
}

