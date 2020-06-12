#include <stdio.h>
#include <stdlib.h>

void main(){
	int ciag[40];
	int i;
	
	ciag[0]=0;
	ciag[1]=1;
	for(i=2; i<40; i++){
		ciag[i]=ciag[i-1]+ciag[i-2];
	}
	for(i=0; i<40; i++){
		printf("%d ",ciag[i]);
	}
}
