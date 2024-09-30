#ifndef GAME_HPP
#define GAME_HPP

#include "board.hpp"

class Game {
private:
    Board board; // instanță a clasei Board
    char current_marker;
    int current_player;

public:
    Game(); // constructor
    void Start(); // începe jocul
    void SwapPlayer(); // schimbă jucătorul
};

#endif
