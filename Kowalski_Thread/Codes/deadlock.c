#include <pthread.h>
#include <stdio.h>

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;

void *fonction_thread1(void *arg) {
    printf("Thread 1 : Attente de mutex1\n");
    pthread_mutex_lock(&mutex1);

    printf("Thread 1 : Verrouillage de mutex1\n");
    sleep(1);

    printf("Thread 1 : Attente de mutex2\n");
    pthread_mutex_lock(&mutex2);


    pthread_mutex_unlock(&mutex2);
    pthread_mutex_unlock(&mutex1);

    return NULL;
}

void *fonction_thread2(void *arg) {
    printf("Thread 2 : Attente de mutex2\n");
    pthread_mutex_lock(&mutex2);

    printf("Thread 2 : Verrouillage de mutex2\n");

    sleep(1);

    printf("Thread 2 : Attente de mutex1\n");
    pthread_mutex_lock(&mutex1);


    pthread_mutex_unlock(&mutex1);
    pthread_mutex_unlock(&mutex2);

    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Création des threads
    pthread_create(&thread1, NULL, fonction_thread1, NULL);
    pthread_create(&thread2, NULL, fonction_thread2, NULL);

    // Attente de la fin des threads
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}

