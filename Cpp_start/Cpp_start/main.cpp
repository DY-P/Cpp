#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const int boardSize = 21;
    int n;
    cin >> n;
    char board[boardSize][boardSize];
    
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            board[i][j] = '.';
        }
    }

    //board[10][10] = "x";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int y;
        cin >> y;
        char a;
        cin >> a;
        
        x = x + 10;
        y = boardSize - (y + 10) - 1;
        board[y][x] = a;
    }
    
    for (int i = 0; i < boardSize; i++) {
        for(int j = 0; j < boardSize; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    return 0;
}
