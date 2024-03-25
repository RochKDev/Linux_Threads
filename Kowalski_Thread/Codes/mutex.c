#include <pthread.h>
#include <stdio.h>


static int glob = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
static void *
routine(void *arg)
{
    pthread_mutex_lock(&mutex);
int loc, j;
for (j = 0; j <100000000 ; j++) {
loc = glob;
loc++;
glob = loc;
}
pthread_mutex_unlock(&mutex);
return NULL;
}
int
main(int argc, char *argv[])
{
pthread_t t1, t2;

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

	printf("Valeur de la variable globale : %d\n", glob);



}
