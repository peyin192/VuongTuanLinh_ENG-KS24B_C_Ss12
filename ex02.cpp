#include <stdio.h>
void inMang(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}
int main(){

	int number[] = {1,2,3,4,5};
	int size = sizeof(number)/sizeof(number[0]);

	inMang(number,size);
	
	return 0;
}
