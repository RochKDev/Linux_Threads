#include <pthread.h>
#include <stdio.h>

struct SharedData{
    int glob;
    pthread_mutex_t mutex;
};
static void *
routine(void *arg)
{
    struct SharedData *donnees = (struct SharedData *)arg;
    pthread_mutex_lock(&(donnees->mutex));
int loc, j;
for (j = 0; j <1000000 ; j++) {
loc = donnees->glob;
loc++;
donnees->glob = loc;
}
pthread_mutex_unlock(&(donnees->mutex));
return NULL;
}
int
main(int argc, char *argv[])
{
pthread_t t1, t2;
struct SharedData donnees;
donnees.glob = 0;
if (pthread_mutex_init(&(donnees.mutex), NULL) != 0) {
        fprintf(stderr, "Erreur lors de l'initialisation du mutex\n");
        return 1;
    }




if (pthread_create(&t1, NULL, &routine, (void *)&donnees))
	{
		return 1;
	}
	if (pthread_create(&t2, NULL, &routine,(void *)&donnees))
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

	printf("Valeur de la variable globale : %d\n", donnees.glob);

if (pthread_mutex_destroy(&(donnees.mutex)) != 0) {
        fprintf(stderr, "Erreur lors de la destruction du mutex\n");
        return 6;
    }


}
