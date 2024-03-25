#include <pthread.h>
#include <stdio.h>

void *fonction_thread(void *arg) {
    int* p = (int *)arg;
    (*p)++;  // Modification de la variable d'origine

    return NULL;
}

int main() {
    pthread_t mon_thread;
    int ma_variable = 42;
    
     printf("Valeur de ma_variable avant le thread : %d\n", ma_variable);

    // Création du thread en passant un pointeur vers la variable
    pthread_create(&mon_thread, NULL, fonction_thread, &ma_variable);

    // Attendre que le thread se termine
    pthread_join(mon_thread, NULL);

    // Afficher la valeur de la variable après l'exécution du thread
    printf("Valeur de ma_variable après le thread : %d\n", ma_variable);

    return 0;
}

