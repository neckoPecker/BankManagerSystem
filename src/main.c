#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Displays the menu to perform different banking activities
int menu()
{
	int choice = 0;
	char* prompt =
		"1) Make a new customer account\n"
		"2) View all customer accounts\n"
		"3) Create customer transaction\n"
		"4) Modify customer account value\n"
		"5) Edit customer account information\n"
		"6) Remove a customer account\n\n"
		"--> ";

	printf("Run a command (1-6): \n");
	printf("%s", prompt);

	// Make sure that user output actually works
	while (1) {
		scanf("%d", &choice);

		if (isdigit(choice))
		{
			printf("Invalid input.\n");
		} 
		else if (choice > 6 || choice < 1)
		{
			printf("Enter a number from 1 to 6.\n");
		}
		else
		{
			break;
		}

		printf("%s", prompt);
	}

	return choice;
}

// Asks for personal banking details to setup account
void new_account()
{
	
}

// Print all customer banking information
void view_list()
{

}

// Deposit/Withdraw from/to specific customer account
void transact()
{

}

// Change customer account information
void edit()
{

}

// Delete customer account and all its information
void erase()
{

}

// Shows information of specific account
void see()
{

}

int main(int argc, char **argv)
{
	printf("Bank Manager Program\nCreated by neckoPecker (masterless123@gmail.com) \n2Created in 2021\n\n");
	
	switch (menu())
	{
	case 1:
		new_account();
	}
	
	return 0;
}