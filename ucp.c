#include <stdio.h>
#include <stdlib.h>
int main (){
	int choice;
	// Program name, Required level for source code access
	printf("Unix Control Panel 0.10.0\n");
	printf("\n\n1. Neofetch\n2. Htop\n3. Reboot\n4. Terminal\n");
	printf("Type a number and hit enter: ");
	scanf("%d", &choice);	
	// Pick a choice
	switch (choice) {
		case 1:
		system("neofetch");
		break;
		case 2:
		system("htop");
		break;
		case 3:
		system("sudo reboot");
		break;
	}


	return 0;	
}
