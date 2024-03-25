#include <unistd.h>
#include <stdio.h>

void myturn(){
	for(int i = 0; i<8; i++){
		sleep(1);
		printf("my Turn\n");
	}
}
void yourturn(){
	for(int i = 0; i<8; i++){
		sleep(1);
		printf("Your Turn\n");
	}
}

int main(){
	myturn();
	yourturn();
}
