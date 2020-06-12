#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int i;
	
	for(i=0; i<100; i++){
		pid_t pid = fork();
		if(pid!=0){
			goto czekaj;
		}
	}
czekaj:
	sleep(10);
	printf("%d ", getpid());
}
