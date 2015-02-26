#include <iostream>
#include "tictactoe.h";

using namespace std;
int main(char argc, char* argsll){
   int const BOARD_SIZE = 3, const TURN = 9;
   int row, col;

   char Board[BOARD_SIZE][BOARD_SIZE] = { { 0, 0, 0 },
   { 0, 0, 0 },
   { 0, 0, 0 } };

   for (int turn = 0; turn < TURN; turn++){
      PrintBoard(Board);
      do {
         if ( turn % 2 == 0)
            cout << "X's turn: ";
         else
            cout << "O's turn: ";
         GetMove(&row, &col);
      } while (!MoveIsValid(Board, row, col));
      Board[row][col] = ((turn % 2) * 2) - 1;
      /*if (checkWin(Board)){
         if (turn % 2 == 0)
            cout << "Player X has Won!!";
         else
            cout << "Player O has Won!!";
         break;
      }*/
   }
   PrintBoard(Board);
   system("pause");
}

/*bool checkWin(char Board[3][3]){
   int const BOARD_SIZE = 3;
   int value;
   bool win_col = true, win_row = true, win_diag = true, win_adiag = true;
   //check coloum
   for (int row = 0; row < BOARD_SIZE; row++){
      value = Board[row][0];
      for (int col = 0; col < BOARD_SIZE; col++){
         if (Board[row][col] != value)
            win_col = false;
      }
   }

   //check row
   for (int col = 0; col < BOARD_SIZE; col++){
      value = Board[0][col];
      for (int row = 0; row < BOARD_SIZE; row++){
         if (Board[row][col] != value)
            win_row = false;
      }
   }
   //check diag
   value = Board[0][0];
   for (int i = 1; i < BOARD_SIZE; i++){
      if (Board[i][i] != value)
         win_diag = false;
   }

   //check anti diag
   value = Board[0][BOARD_SIZE];
   for (int col = 0; col < BOARD_SIZE; col++){
      if (Board[BOARD_SIZE - col][col] != value)
         win_adiag = false;
   }

   return win_row || win_col || win_diag || win_adiag ? true : false;

}*/
