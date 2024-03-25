#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void* myturn(void* arg){
	for(int i = 0; i < 10; i++){
		sleep(1);
		printf("my Turn %d \n", i);
	}
return NULL;
}
void yourturn(){
	for(int i = 0; i < 4; i++){
		sleep(1);
		printf("Your Turn %d \n",i);
	}
}

int main(){
	pthread_t newthread;

	pthread_create(&newthread, NULL, &myturn, NULL);
	
	yourturn();

	pthread_join(newthread, NULL);
}
