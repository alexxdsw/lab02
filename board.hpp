#ifndef BOARD_HPP
#define BOARD_HPP

class Board {
private:
    char grid[3][3]; 

public:
    Board(); 
    void DrawBoard(); 
    bool PlaceMarker(int slot, char marker); 
    int CheckWinner(); 
};

#endif
