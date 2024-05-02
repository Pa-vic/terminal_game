#ifndef MAIN_H
#define MAIN_H



#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern char board[3][3]; 
extern const char PLAYER_1;
extern const char PLAYER_2;
extern const char AI_PLAYER;
extern char response;
extern int player1Score;
extern int player2Score;

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove(char currentPlayer);
void aiMove();
char checkWinner();
void printWinner(char winner);
void displayMenu();
void updateScore(char winner);
void printScore();
void resetScores();
void playGame(); // Added missing function declaration

#endif
