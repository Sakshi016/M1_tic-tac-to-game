#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include"game.h"

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
