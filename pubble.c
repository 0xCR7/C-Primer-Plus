#include<stdio.h>


int main(void){

  int a[8] = {15,23,34,12,45,29,28,65};	
	
	int i, j, temp = 0;
	int n = 8;

	for(i = 0; i < n-1; i++){
		for(j = 0; j < n - i -2; j++){
			if(a[j] > a[j+1]){
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}	
		}	
	}

	printf("the sorted array is :\n");
	for(i = 0; i < 8; i++){
		printf("%d,", a[i]);	
	}

	printf("\n");
	return 0;
}
