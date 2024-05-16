#include "main.h"
#include <stdio.h>

const char PLAYER_1 = 'X';
const char PLAYER_2 = 'O';
const char AI_PLAYER = 'A';
char board[3][3];
char response;
int player1Score = 0;
int player2Score = 0;

int main() {
    srand(time(NULL)); 
    char winner = ' ';

    resetScores();
    resetBoard();

    do {
        winner = ' ';
        displayMenu();
        playGame(); // Moved playGame after displayMenu
        updateScore(winner);
        printScore();

        printf("\nWould you like to play again? (Y/N): ");
        scanf(" %c", &response);
        response = toupper(response);
    } while (response == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
