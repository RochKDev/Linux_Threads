#include <pthread.h>
#include <stdio.h>
#include <string.h>

char ressource_partagee[] = "texte";
int condition = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

void *routine1(void *arg) {
    pthread_mutex_lock(&mutex);
    char str[8] = " thread1";
    condition = 1;
    strcat(ressource_partagee, str);
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&mutex);

    return NULL;
}

void *routine2(void *arg) {
    pthread_mutex_lock(&mutex);
    while (condition != 1) {
        pthread_cond_wait(&cond, &mutex);
    }

    printf("J'ai lu %s\n", ressource_partagee);

    pthread_mutex_unlock(&mutex);

    return NULL;
}

int main() {
    pthread_t t1, t2;

    if (pthread_create(&t2, NULL, &routine2, NULL)) {
        return 2;
    }

    sleep(5);

    if (pthread_create(&t1, NULL, &routine1, NULL)) {
        return 1;
    }

    if (pthread_join(t1, NULL)) {
        return 3;
    }
    if (pthread_join(t2, NULL)) {
        return 4;
    }

    return 0;
}

