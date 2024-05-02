#include "main.h"


void playGame() {
    char currentPlayer = PLAYER_1;
    char winner = ' ';

    resetBoard();

    // Game loop
    do {
        // Print the current state of the board
        printBoard();

        // Make a move for the current player
        if (currentPlayer == PLAYER_1 || (currentPlayer == PLAYER_2 && response == '1')) {
            playerMove(currentPlayer);
        } else if (currentPlayer == PLAYER_2 || (currentPlayer == AI_PLAYER && response == '2')) {
            aiMove();
        }

        // Check for a winner
        winner = checkWinner();

        // Switch to the next player
        currentPlayer = (currentPlayer == PLAYER_1) ? PLAYER_2 : PLAYER_1;

    } while (winner == ' ' && checkFreeSpaces() > 0);

    // Print the final state of the board
    printBoard();

    // Print the winner or a tie message
    printWinner(winner);
}