#ifndef GAME_H
#define GAME_H
char board[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = '0';
const char COMPUTER = 'O';
char choice;


void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);
void player2Move();








#endif