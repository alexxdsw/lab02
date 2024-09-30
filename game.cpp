#include "game.hpp"
#include <iostream>

Game::Game() {
    current_player = 1;
    current_marker = 'X';
}

void Game::SwapPlayer() {
    current_marker = (current_marker == 'X') ? 'O' : 'X';
    current_player = (current_player == 1) ? 2 : 1;
}

void Game::Start() {
    board.DrawBoard();
    int winner = 0;

    for (int i = 0; i < 9; i++) {
        int slot;
        std::cout << "Player " << current_player << " (" << current_marker << "), choose a slot: ";
        std::cin >> slot;

        if (!board.PlaceMarker(slot, current_marker)) {
            std::cout << "Slot invalid! Try again.\n";
            i--;
            continue;
        }

        board.DrawBoard();
        winner = board.CheckWinner();

        if (winner) {
            std::cout << "Player " << current_player << " wins!\n";
            return;
        }

        SwapPlayer();
    }

    std::cout << "It's a tie!\n";
}
