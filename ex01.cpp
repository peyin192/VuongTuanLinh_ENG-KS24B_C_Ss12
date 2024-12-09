#include <stdio.h>
int sum(int a,int b){
	return a+b;
}
int main(){
	if(sum(3,5)%2==0){
		printf("Tong cua 2 so la chan");
	}else{
		printf("Tong cua 2 so la le");
	}
	return 0;
	}

