#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//global varaible
char board[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = '0';
const char COMPUTER = 'O';
char choice;

//function Prototype
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);
void player2Move();

int main()
{
    printf("For Player vs Player please enter : p\n");
    printf("For Player vs computer please enter : c\n");
    scanf("%c",&choice);
   char winner = ' ';
   char response = ' ';

   do
   {
      winner = ' ';
      response = ' ';
      resetBoard();

      while(winner == ' ' && checkFreeSpaces() != 0)
      {
         printBoard();

         playerMove();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }

        if(choice=='c')
        {
          computerMove();   
        }
        else
        {
            printBoard();
            player2Move();
        }
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
      }

      printBoard();
      printWinner(winner);

      printf("\nWould you like to play again? (Y/N): ");
      while ((getchar()) != '\n');                       //for clearing the input buffer 
      scanf("%c", &response);
      response = toupper(response);
   } while (response == 'Y');

   printf("Thanks for playing!");

   return 0;
}

//Reseting the board with empty space
void resetBoard()
{
   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         board[i][j] = ' ';
      }
   }
}

//display the Board 
void printBoard()
{
   printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
   printf("\n");
}

//checking the free spaces on board
int checkFreeSpaces()
{
   int freeSpaces = 9;

   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         if(board[i][j] != ' ')
         {
            freeSpaces--;
         }
      }
   }
   return freeSpaces;
}

//Player one move
void playerMove()
{
   int x;
   int y;
    printf("Player1 move \n");
   do
   {
      printf("Enter row $(1-3): ");
      scanf("%d", &x);
      x--;
      printf("Enter column $(1-3): ");
      scanf("%d", &y);
      y--;

      if(board[x][y] != ' ')
      {
         printf("Invalid move!\n");
      }
      else
      {
         board[x][y] = PLAYER1;
         break;
      }
   } while (board[x][y] != ' ');
   
}

//Player two move
void player2Move()
{
   int x;
   int y;
    printf("Player2 move \n");
   do
   {
      printf("Enter row $(1-3): ");
      scanf("%d", &x);
      x--;
      printf("Enter column $(1-3): ");
      scanf("%d", &y);
      y--;

      if(board[x][y] != ' ')
      {
         printf("Invalid move!\n");
      }
      else
      {
         board[x][y] = PLAYER2;
         break;
      }
   } while (board[x][y] != ' ');
   
}

//Computer Move
void computerMove()
{
   int x;
   int y;

   if(checkFreeSpaces() > 0)
   {
      do
      {
         x = rand() % 3;
         y = rand() % 3;
      } while (board[x][y] != ' ');
      
      board[x][y] = COMPUTER;
   }
   else
   {
      printWinner(' ');
   }
}


char checkWinner()
{
   //check rows
   for(int i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
         return board[i][0];
      }
   }
   //check columns
   for(int i = 0; i < 3; i++)
   {
      if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      {
         return board[0][i];
      }
   }
   //check diagonals
   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];
   }

   return ' ';
}

//check the result and prints the winner
void printWinner(char winner)
{
   if(winner == PLAYER1)
   {
      printf("Player1 WIN!");
   }
   else if(winner == PLAYER2)
   {
       printf("Player2 WIN!");
   }
   else if(winner == COMPUTER)
   {
      printf("Computer WIN!");
   }
   else{
      printf("IT'S A TIE!");
   }
}