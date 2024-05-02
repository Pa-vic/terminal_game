#include "main.h"

void playerMove(char currentPlayer) {
    int x, y;
    do {
        printf("Player %c's turn\n", currentPlayer);
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;

        printf("Enter column #(1-3): ");
        scanf("%d", &y);
        y--;

        if (x < 0 || x >= 3 || y < 0 || y >= 3) {
            printf("Invalid move! Please enter valid row and column numbers.\n");
        } else if (board[x][y] != ' ') {
            printf("Invalid move! That cell is already occupied.\n");
        } else {
            board[x][y] = currentPlayer;
            break;
        }
    } while (1);
}

void aiMove() {
    int x, y;
    printf("AI Player's turn\n");
    do {
        x = rand() % 3;
        y = rand() % 3;
        if (board[x][y] == ' ') {
            board[x][y] = AI_PLAYER;
            break;
        }
    } while (1);
}
