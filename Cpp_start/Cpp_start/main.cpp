#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const int boardSize = 21;
    int temp;
    cin >> temp;
    int y;
    cin >> y;
    string a;
    cin >> a;
    string board[boardSize][boardSize]{};
    
    int x = boardSize - temp - 1;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            board[i][j] = ".";            
        }
    }
    board[x][y] = a;
    for (int i = 0; i < boardSize; i++) {
        for(int j = 0; j < boardSize; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    return 0;
}
