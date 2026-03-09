#include <iostream>
using namespace std;

char board[9] = {'1','2','3','4','5','6','7','8','9'};

void drawBoard() {
    cout << endl;
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
    cout << endl;
}

bool checkWin() {

    int win[8][3] = {
        {0,1,2},{3,4,5},{6,7,8},
        {0,3,6},{1,4,7},{2,5,8},
        {0,4,8},{2,4,6}
    };

    for(int i=0;i<8;i++){
        if(board[win[i][0]] == board[win[i][1]] &&
           board[win[i][1]] == board[win[i][2]])
           return true;
    }

    return false;
}

int main() {

    int move;
    char player = 'X';
    int turns = 0;

    while(turns < 9) {

        drawBoard();

        cout << "Player " << player << ", enter position (1-9): ";
        cin >> move;

        if(move < 1 || move > 9 || board[move-1] == 'X' || board[move-1] == 'O') {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        board[move-1] = player;
        turns++;

        if(checkWin()) {
            drawBoard();
            cout << "Player " << player << " wins!\n";
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    drawBoard();
    cout << "It's a draw!\n";

    return 0;
}
