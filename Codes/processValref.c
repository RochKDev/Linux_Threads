#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
struct SharedData{
	int val;
};
int main(int argc, char const *argv[])
{
	struct SharedData* data;
	// Allocation dynamique pour la structure SharedData
    	data = (struct SharedData*)malloc(sizeof(struct SharedData));
    
    	// Vérification si l'allocation a réussi
    	if (data == NULL) {
        	fprintf(stderr, "Erreur d'allocation mémoire\n");
        	return 1;
    	}
	data->val = 0;
	
	
	int pid = fork();

	if(pid == -1){
		return 1;
	}
	if (pid == 0)
	{
		data->val = 10;
	}

	sleep(5);
	printf("Valeur de x pour le process %d est : %d\n", getpid(), data->val);


	if(pid != 0){
		wait(NULL);
	}
	 free(data);
	return 0;
}
