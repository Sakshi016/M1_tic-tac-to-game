#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#include"game.h"

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