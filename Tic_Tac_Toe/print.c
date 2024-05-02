#include "main.h"

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j != 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i != 2) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

void printWinner(char winner) {
    if (winner == PLAYER_1) {
        printf("\nPlayer 1 won the game.\n");
    } else if (winner == PLAYER_2) {
        printf("\nPlayer 2 won the game.\n");
    } else if (winner == AI_PLAYER) {
        printf("\nAI Player won the game.\n");
    } else {
        printf("\nIt's a tie!\n");
    }
}

void printScore() {
    printf("\nScore:\n");
    printf("Player 1: %d\n", player1Score);
    if (response == '1') {
        printf("Player 2: %d\n", player2Score);
    } else if (response == '2') {
        printf("AI Player: %d\n", player2Score);
    }
}