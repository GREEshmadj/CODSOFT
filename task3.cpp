#include <iostream>

using namespace std;

const int BOARD_SIZE = 3;
void printBoard(char board[BOARD_SIZE][BOARD_SIZE])
{
    cout << "     0    1    2" << endl;
    cout << "  ++===++===++===++" << endl;
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        cout << i << " || ";
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            cout << board[i][j] << " || ";
        }
        cout << endl;
        cout << "  ++===++===++===++" << endl;
    }
}
bool checkWin(char board[BOARD_SIZE][BOARD_SIZE], char player)
{
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
        {
            return true;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return true;
    }
    return false;
}
bool checkDraw(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}
char switchPlayer(char currentPlayer)
{
    return (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    char board[BOARD_SIZE][BOARD_SIZE] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
    char currentPlayer = 'X';

    do {
        printBoard(board);
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;
        if (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == ' ') {
            board[row][col] = currentPlayer;
             if (checkWin(board, currentPlayer))
                {
                printBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
                }
            if (checkDraw(board))
                {
                printBoard(board);
                cout << "The game is a draw!" << endl;
                break;
                }
            currentPlayer = switchPlayer(currentPlayer);
        } else {
            cout << "Invalid move. Please try again." << endl;
        }
    } while (true);

    char playAgain;
    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;

    if (playAgain == 'y' || playAgain == 'Y')
    {
        for (int i = 0; i < BOARD_SIZE; ++i)
        {
            for (int j = 0; j < BOARD_SIZE; ++j)
            {
                board[i][j] = ' ';
            }
        }
        main(); // Restart the game
    }
    else
        {
        cout << "Thanks for playing! Goodbye." << endl;
        }
return 0;
}
