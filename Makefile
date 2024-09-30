all: TicTacToe

TicTacToe: board.o game.o main.o
    g++ -o TicTacToe board.o game.o main.o

board.o:
    g++ board.cpp -o board.o -c

game.o:
    g++ game.cpp -o game.o -c

main.o:
    g++ main.cpp -o main.o -c

clean:
    rm -f *.o TicTacToe
