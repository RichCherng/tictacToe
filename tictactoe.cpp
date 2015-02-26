#include <iostream>;
#include <string>;
using namespace std;

void PrintBoard(char board[3][3]){
   cout << "- 0 1 2" << endl;
   for (int row = 0; row < 3; row++){
      cout << row;
      for (int col = 0; col < 3; col++){
         if (board[row][col] == 0){
            cout << " .";
         }
         else if (board[row][col] == 1){
            cout << " O";
         }
         else if (board[row][col] == -1){
            cout << " X";
         }
      }
      cout << endl;
   }
   cout << endl;
}

void GetMove(int *row, int *col){
   char comma;
   int row_input, com, col_input;
      cin >> row_input;
      cin >> comma;
      cin >> col_input;
   

   *row = row_input;
   *col = col_input;
}

bool MoveIsValid(char board[3][3], int row, int col){
   if ((row > 3 || col > 3) || (row < 0 || col < 0)){
      cout << "That space is invalid!" << endl;
      return false;
   }
   if (board[row][col] != 0){
      cout << "That space is already taken!" << endl;
      return false;
   }
   else
      return true;
}