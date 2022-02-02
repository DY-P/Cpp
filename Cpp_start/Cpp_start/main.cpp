#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const int boardSize = 21;
    int n;
    cin >> n;
    char board[boardSize][boardSize];
    int xmin = 20;
    int xmax = 0;
    int ymin = 20;
    int ymax = 0;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            board[i][j] = '.';
        }
    }

    //board[10][10] = "x";
    for (int i = 0; i < n; i++) {
        int x; //col
        cin >> x;
        int y; //row
        cin >> y;
        char a;
        cin >> a;
        
        x = x + 10;
        y = boardSize - (y + 10) - 1;
        board[y][x] = a;
        
        if (x < ymin) {
            ymin = x;
        }
        if (x > ymax) {
            ymax = x;
        }
        
        if (y < xmin) {
            xmin = y;
        }
        if (y > xmax) {
            xmax = y;
        }
        
        //cout << xmin << endl << xmax << endl << ymin << endl << ymax << endl;
        
    }
    for (int i = 0; i < (20 + 1); i++) {
        for (int j = 0; j < (20 + 1); j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    //cout << xmin << endl << xmax << endl << ymin << endl << ymax << endl;
    cout << endl;
    for (int i = xmin; i < (xmax + 1); i++) {
        for (int j = ymin; j < (ymax + 1); j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    return 0;
}
