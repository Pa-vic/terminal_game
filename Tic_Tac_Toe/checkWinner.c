#include "main.h"

char checkWinner() {
    // Check rows for a winning pattern
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return board[i][0]; // Return the winning symbol
        }
    }

    // Check columns for a winning pattern
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
            return board[0][j]; // Return the winning symbol
        }
    }

    // Check diagonals for a winning pattern
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return board[1][1]; // Return the winning symbol (since it's the center of the diagonal)
    }

    // If no winning pattern is found, return ' ' (indicating no winner yet)
    return ' ';
}