#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int x = 2;
int main(int argc, char const *argv[])
{
	
	int pid = fork();

	if(pid == -1){
		return 1;
	}
	if (pid == 0)
	{
		x++;
		printf("Valeur de x pour le process %d est : %d\n", getpid(), x);
		exit(0);
		
	}

	sleep(2);
	printf("Valeur de x pour le process %d est : %d\n", getpid(), x);


	if(pid != 0){
		wait(NULL);
	}
	return 0;
}
