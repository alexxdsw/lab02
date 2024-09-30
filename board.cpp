#include "board.hpp"
#include <iostream>

Board::Board() {
    int count = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = '0' + count++; // initializează tabla cu 1, 2, ..., 9
        }
    }
}

void Board::DrawBoard() {
    std::cout << " " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << std::endl;
}

bool Board::PlaceMarker(int slot, char marker) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (grid[row][col] != 'X' && grid[row][col] != 'O') {
        grid[row][col] = marker;
        return true;
    }
    return false;
}

int Board::CheckWinner() {
    // verifică rânduri și coloane
    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            return 1;
        }
        if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) {
            return 1;
        }
    }
    // verifică diagonalele
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
        return 1;
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
        return 1;
    }
    return 0; // fără câștigător
}
