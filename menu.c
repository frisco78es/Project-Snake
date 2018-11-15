#include "menu.h"
#include <stdio.h>
#include "gestion_clavier.h"

void menu(int i)
{
	if(i == 1){
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
		printf("X                                     X\n");
		printf("X     PLAY          -SELECTED-        X\n");
		printf("X                                     X\n");
		printf("X     SCORE                           X\n");
		printf("X                                     X\n");
		printf("X     LEAVE                           X\n");
		printf("X                                     X\n");
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	}
	if(i == 2){
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
		printf("X                                     X\n");
		printf("X     PLAY                            X\n");
		printf("X                                     X\n");
		printf("X     SCORE         -SELECTED-        X\n");
		printf("X                                     X\n");
		printf("X     LEAVE                           X\n");
		printf("X                                     X\n");
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	}
	if(i == 3){
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
		printf("X                                     X\n");
		printf("X     PLAY                            X\n");
		printf("X                                     X\n");
		printf("X     SCORE                           X\n");
		printf("X                                     X\n");
		printf("X     LEAVE         -SELECTED-        X\n");
		printf("X                                     X\n");
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	}
}

int choixmenu(void){

	char key;
	int i = 1;
	do{
		system("@cls||clear");
		menu(i);
		key = pressing_key();
		if(key == 'z'){
			if(i==1){
				i=3;				
			}
			else{
				i--;
			}
		}
		if(key == 's'){
			if(i==3){
				i=1;				
			}
			else{
				i++;
			}
		
		}	
	}while(key != '\n');
	return i;
}
