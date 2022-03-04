/**
 * @file Tic-tac-toe
 * @author Sakshi Kurhade (kurhadesakshi@gmail.com)
 * @brief It is a two player game. It is played on a grids thats 3 squares by 3 squares.It can be played anytime anywhere.
 * @version 0.1
 * @date 2022-02-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef GAME_H
#define GAME_H

char board[3][3];
 char PLAYER1 ;
 char PLAYER2 ;
char COMPUTER ;
char choice;

/**
 * @brief  It resets the value.
 * 
 */
void resetBoard();
/**
 * @brief  It prints the value
 * 
 */
void printBoard();
/**
 * @brief  It checks the free space.
 * 
 * @return int 
 */
int checkFreeSpaces();
/**
 * @brief  it suggests the player to take the next move.
 * 
 */
void playerMove();
/**
 * @brief  Computer is allowed to take the next move,
 * 
 */
void computerMove();
/**
 * @brief declares the winner 
 * 
 * @return char 
 */
char checkWinner();
/**
 * @brief prints the result as winner 
 */
void printWinner(char);
/**
 * @brief input from player2
 * 
 */
void player2Move();








#endif