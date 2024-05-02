#include "main.h"

void displayMenu() {
    int choice;

    printf("Welcome to Tic Tac Toe!\n");
    printf("Enter your choice (1-2):\n");
    printf("1. 2 Players Mode\n");
    printf("2. Single Player Mode\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\n--- Two Players Mode ---\n");
        response = '1';
    } else if (choice == 2) {
        printf("\n--- Single Player Mode ---\n");
        response = '2';
    } else {
        printf("\nInvalid choice. Starting in 2 Players Mode.\n");
        response = '1';
    }
}