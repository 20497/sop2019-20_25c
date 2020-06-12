#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int i;
	pid_t mainpid = getpid();
	//Proces mainpid
	for(i=0; i<100; i++){
		//Proces mainpid
		if(getpid()==mainpid){
			//Proces mainpid
			fork();
			//Proces mainpid & child
		}
	}
	//Proces mainpid & child
	printf("%d ", getpid());
}
