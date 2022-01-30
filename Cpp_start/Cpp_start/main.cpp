#include <iostream>
using namespace std;

int main() {
    
    const int boardSize = 21;
    
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}
