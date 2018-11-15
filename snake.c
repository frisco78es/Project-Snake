#include <stdio.h>
#include "gestion_clavier.h"
#include "menu.h"

int main()
{
	int i;
	i = choixmenu();
	
	while(i != 3){
		i = choixmenu();
	}
	return 0;
}
