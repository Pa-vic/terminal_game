#include "main.h"

void updateScore(char winner) {
    if (winner == PLAYER_1) {
        player1Score++;
    } else if (winner == PLAYER_2 || winner == AI_PLAYER) {
        player2Score++;
    }
}