#include <stdio.h>
#include <stdlib.h>

int fib(int indeks){
	if(indeks==0 || indeks==1)
		return indeks;
	
	return fib(indeks-1) + fib(indeks-2);
}

void main(){
	int i;
	
	for(i=0; i<40; i++){
		printf("%d ", fib(i));
	}
}
