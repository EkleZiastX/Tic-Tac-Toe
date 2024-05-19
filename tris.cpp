#include <iostream>
#include <string>

using namespace std;

char table[3][3];

void create_table() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            table[i][j] = ' ';
        }
    }
}

void print_table() {
    cout << "\n  0   1   2\n";
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << " " << table[i][j];
            if (j < 2) cout << " |";
        }
        cout << "\n";
        if (i < 2) cout << " ---|---|---\n";
    }
    cout << "\n";
}

bool check_win() {
    for (int i = 0; i < 3; i++) {
        if ((table[i][0] == table[i][1] && table[i][1] == table[i][2] && table[i][0] != ' ') ||
            (table[0][i] == table[1][i] && table[1][i] == table[2][i] && table[0][i] != ' ')) {
            return true;
        }
    }
    if ((table[0][0] == table[1][1] && table[1][1] == table[2][2] && table[0][0] != ' ') ||
        (table[0][2] == table[1][1] && table[1][1] == table[2][0] && table[0][2] != ' ')) {
        return true;
    }
    return false;
}

bool is_full() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (table[i][j] == ' ') return false;
        }
    }
    return true;
}

int main() {
    cout << "WELCOME TO TIC-TAC-TOE GAME\n";
    cout << "The player who succeeds in placing three of their marks in a horizontal,\nvertical, or diagonal row is the winner.\n";

    string player1, player2;
    int row, col, player = 1;
    char mark;
    bool game_over;

    cout << "Enter the name of player 1: ";
    cin >> player1;
    cout << "Enter the name of player 2: ";
    cin >> player2;

    do {
        create_table();
        game_over = false;

        while (!game_over) {
            print_table();
            cout << (player == 1 ? player1 : player2) << ", enter row and column (separated by space) for your move: ";
            cin >> row >> col;

            if (row < 0 || row > 2 || col < 0 || col > 2 || table[row][col] != ' ') {
                cout << "INVALID MOVE!\n";
                continue;
            }

            mark = (player == 1) ? 'X' : 'O';
            table[row][col] = mark;

            if (check_win()) {
                print_table();
                cout << "CONGRATULATIONS " << (player == 1 ? player1 : player2) << ", YOU WIN!\n";
                game_over = true;
            }
            else if (is_full()) {
                print_table();
                cout << "DRAW!\n";
                game_over = true;
            }
            else {
                player = (player == 1) ? 2 : 1;
            }
        }

        cout << "Press 1 to play again, 0 to exit: ";
        cin >> game_over;
    } while (game_over == 1);

    cout << "THANK YOU FOR PLAYING TIC-TAC-TOE\n\nCredits by EkleZiast\n";
    return 0;
}
