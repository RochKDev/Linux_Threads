#include <unistd.h>
#include <pthread.h>
#include <stdio.h>

void* routine(){
	printf("Process ID %d \n", getpid());
	pid_t tid = gettid();
	printf("Thread ID %d\n", tid);
	return NULL;
}

int main(int argc, char const *argv[])
{
	pthread_t t1,t2;

	if (pthread_create(&t1, NULL, &routine, NULL))
	{
		return 1;
	}
	if (pthread_create(&t2, NULL, &routine, NULL))
	{
		return 2;
	}

	if (pthread_join(t1, NULL))
	{
		return 3;
	}
	if (pthread_join(t2, NULL))
	{
		return 4;
	}


	return 0;
}
