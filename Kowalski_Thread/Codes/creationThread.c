
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
void* myturn(){
	for(int i = 0; i < 8; i++){
		sleep(1);
		printf("my Turn\n");
	}
}
void yourturn(){
	for(int i = 0; i < 4; i++){
		sleep(1);
		printf("Your Turn\n");
	}
}

int main(){
	pthread_t newthread;

	pthread_create(&newthread, NULL, &myturn, NULL);
	
	yourturn();
}
