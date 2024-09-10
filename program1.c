#include<stdlib.h>
#include<stdio.h>

//this program does averages

int avg(int a, int b){
	int result;
	result = (a+b)/2;

	return result;
}
int main(int argc, char* argv[]){
	int average;
	average = avg(4,2);
	printf("Average of the two values is: %d.\n", average);
	return 0;
}
