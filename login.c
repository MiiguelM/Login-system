#include <stdio.h>
#include <string.h>

struct User {
   char name[50];
   char password[50];
   int isAdmin;
};

int main() {
    int option = -1;
    while (option != 0){
    printf("\nSelect an option:\n");
    printf("\n1. Register\n");
    printf("2. Login\n");
    printf("0. Exit\n");
    printf("\n-> ");

    if (scanf("%d", &option) == 0){
        while(getchar() != '\n');
        printf("Invalid input, please enter a number\n");
        continue;
    }
    switch (option){
    case 1:
        printf("You select register.\nEnter a username and a password.\n");
        break;
    
    case 2:
        printf("You select login.\nEnter your user and password.\n");
        break;

    case 0:
        printf("Exiting...");
        break;
    default:
        printf("invalid input, please try again.\n");
        break;
    }

}
}