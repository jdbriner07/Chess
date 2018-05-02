//
//  main.cpp
//  Chess
//
//  Created by Jeffrey Briner on 4/23/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#include <iostream>
#include "pieces/pawn.hpp"
#include "Piece.hpp"
#include "board.hpp"

void makeMove(Board &board) {
    int row;
    int col;
    do {
        std::cout << "Please enter the row of the piece you wish to move.\n";
        std::cin >> row;
        std::cout << "Please enter the column of the piece you wish to move.\n";
        std::cin >> col;
        if (board[col][row]) {
            std::cout << board[col][row]->getPiece() << "\n";
        } else {
            std::cout << "there is not a piece at those coordinates.\n";
        }
    } while (!board[col][row]);
    int rowTo;
    std::cout << "Please enter the row to move your piece to.\n";
    std::cin >> rowTo;
    int colTo;
    std::cout << "Please enter the column to move your piece to.\n";
    std::cin >> colTo;
    board.move(row, col, rowTo, colTo);
}

int main() {
    Board board;
    board.print();
    
    makeMove(board);
    
    board.print();
    
    return 0;
}
