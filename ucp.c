#include <stdio.h>
#include <stdlib.h>
int main (){
	int choice;
	// Program name, what numbers to type, prompt
	system("clear");
	printf("Unix Control Panel 0.10.2\n");
	printf("\n1. Neofetch\n2. Htop\n3. Reboot\n4. Terminal\n");
	printf("Type a number and hit enter: ");
	scanf("%d", &choice);	
	// Pick a choice
	// Requires neofetch and htop
	switch (choice) {
		case 1:
		system("neofetch");
		break;
		case 2:
		system("htop");
		int choice = 0;
		break;
		case 3:
		// replace with what your init system uses 
		system("reboot");
		break;
	}
	return 0;	
}
