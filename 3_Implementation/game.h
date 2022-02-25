#ifndef GAME_H
#define GAME_H

char board[3][3];
 char PLAYER1 ;
 char PLAYER2 ;
char COMPUTER ;
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