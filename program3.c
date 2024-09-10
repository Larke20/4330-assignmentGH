#include <stdlib.h>
#include <stdio.h>

//this program just sorts an array using qsort

int cmp(const void *p1, const void *p2){
	
	return *((int *)p1) - *((int *)p2);
}
int main(int argc, char* argv[]){
	int arr[] = {4,1,5,3,2};
	int len = sizeof(arr) / sizeof(int);
	printf("Array before qsort is: [4, 1, 5, 3, 2]\n");
	qsort(arr, len, sizeof(int), cmp);
	
	for(int i = 0; i < len; i++){
		printf("Array after qsort is %d\n", arr[i]);
	}
	return 0;
}

