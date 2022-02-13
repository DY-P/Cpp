#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const int boardSize = 21;
    int n;
    cin >> n;
    char board[boardSize][boardSize];
    int colMin = 20;
    int colMax = 0;
    int rowMin = 20;
    int rowMax = 0;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            board[i][j] = '.';
        }
    }

    //board[10][10] = "x";
    for (int i = 0; i < n; i++) {
        int y; //col
        cin >> y;
        int x; //row
        cin >> x;
        char a;
        cin >> a;
        
        y = y + 10;
        x = boardSize - (x + 10) - 1;
        board[x][y] = a;
        
        if (x < rowMin) {
            rowMin = x;
        }
        if (x > rowMax) {
            rowMax = x;
        }
        
        if (y < colMin) {
            colMin = y;
        }
        if (y > colMax) {
            colMax = y;
        }
        
        //cout << colMin << endl << colMax << endl << rowMin << endl << rowMax << endl;
        
    }
    for (int i = 0; i < (20 + 1); i++) {
        for (int j = 0; j < (20 + 1); j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    //cout << colMin << endl << colMax << endl << rowMin << endl << rowMax << endl;
    cout << endl;
    for (int i = rowMin; i < (rowMax + 1); i++) {
        for (int j = colMin; j < (colMax + 1); j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    return 0;
}
