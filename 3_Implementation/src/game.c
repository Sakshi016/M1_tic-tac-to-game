#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include"game.h"

//function Prototype
extern void resetBoard();
extern void printBoard();
extern int checkFreeSpaces();
extern void playerMove();
extern void computerMove();
extern char checkWinner();
extern void printWinner(char);
extern void player2Move();


int main()
{
   PLAYER1 = 'X';
 PLAYER2 = '0';
COMPUTER = 'O';

   
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