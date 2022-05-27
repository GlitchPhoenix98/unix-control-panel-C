#include <stdio.h>
#include <stdlib.h>
int main (){
	int choice;
	// Beginning of while loop
	do {
	// Program name, what numbers to type, prompt
	printf("Unix Control Panel 0.10.1\n");
	printf("\n\n1. Neofetch\n2. Htop\n3. Reboot\n4. Terminal\n");
	printf("Type a number and hit enter: ");
	scanf("%d", &choice);	
	// Pick a choice
	// Requires neofetch and htop
	switch (choice) {
		case 1:
		system("neofetch");
		break;
		case 2:
		system("clear");
		system("htop");
		// Reset choice so it doesn't take all the ram.
		int choice = 0;
		break;
		case 3:
		// replace with what your init system uses or doas if you use that
		system("sudo reboot");
		break;
	}
	// If you picked htop, it will loop it so you can exit and use it again.
	} while(choice == 2);
	return 0;	
}
