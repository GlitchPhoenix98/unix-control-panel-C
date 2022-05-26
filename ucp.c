#include <stdio.h>
#include <stdlib.h>
int main (){
	int choice;
	// Program name, Required level for source code access
	printf("Unix Control Panel 0.9.0");
	printf("\n\n1. Neofetch\n2. Htop\n3. Reboot\n4. Terminal\n");
	printf("Type a number and hit enter: ");
	scanf("%d", &choice);	
	// Pick a choice
	if (choice == 1) {
		system("neofetch");
	// If it isnt equal to one
	} else {
	if (choice == 2)
		system("htop");
	} if (choice == 3) {
	 char rebootchoice[1];
		printf("Are you sure? y/n: \n");
		scanf("%s", rebootchoice);
		if (rebootchoice == 'y')
			system("reboot");
	}
	// DO NOT ADD 4 AS A CHOICE, IF THERE IS NO OPTION THE PROGRAM WILL AUTOMATICALLY EXIT
	return 0;	
}
