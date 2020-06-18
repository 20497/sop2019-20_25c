#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	//Proces A
	pid_t pidB = fork();
	if(pidB==0){
		//Proces B
		pid_t pidD = fork();
		//Proces B & D
		if(pidD!=0){
			//Proces B
			pid_t pidE = fork();
			printf("%d ", getpid());
			sleep(5)
		}
		//Proces D
		printf("%d ", getpid());
		sleep(5)

	}
	else if(pidB!=0){
		//Proces A
		pid_t pidC = fork();
		//Proces A & C
		if(pidC!=0){
			//Proces A
			printf("%d ", getpid());
			sleep(5);
		}
		//Proces C
		pid_t pidF = fork();
		//Proces C & F
		if(pidF!=0){
			//Proces C
			pid_t pidG = fork();
		}
		printf("%d ", getpid(();
		sleep(5);
	}
}
