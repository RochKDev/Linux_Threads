#include <unistd.h>
#include <pthread.h>
#include <stdio.h>

int x = 2;

void* routine1(){
	x +=5;
	pid_t tid = gettid();
	printf("Le Thread %d voit pour valeur de x : %d \n", tid, x);
	return NULL;
}
void* routine2(){
	pid_t tid = gettid();
	printf("Le Thread %d voit pour valeur de x : %d \n", tid, x);
	return NULL;
}

int main(int argc, char const *argv[])
{
	pthread_t t1,t2;

	if (pthread_create(&t1, NULL, &routine1, NULL))
	{
		return 1;
	}
	sleep(2);
	if (pthread_create(&t2, NULL, &routine2, NULL))
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
