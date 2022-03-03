#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include"game.h"



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