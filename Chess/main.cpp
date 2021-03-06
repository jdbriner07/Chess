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
        if (board[row][col]) {
            std::cout << board[row][col]->getPiece() << "\n";
        } else {
            std::cout << "there is not a piece at those coordinates.\n";
        }
    } while (!board[row][col]);
    int rowTo;
    int colTo;
    do {
        std::cout << "Please enter the row to move your piece to.\n";
        std::cin >> rowTo;
        std::cout << "Please enter the column to move your piece to.\n";
        std::cin >> colTo;
    } while (!((rowTo >= 0 && colTo >= 0 && rowTo < 8 && colTo < 8) && (rowTo != row || colTo != col) && board[row][col]->checkMove(rowTo, colTo)));
        
    board.move(row, col, rowTo, colTo);
}

void playGame(Board &board) {
    // while the game is ongoing
        // swap the turn, starting with white
        // call makeMove for that player
        // check for checkmate
}

int main() {
    Board board;
    board.print();
    
    makeMove(board);
    
    board.print();
    
    return 0;
}
