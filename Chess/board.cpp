//
//  board.cpp
//  Chess
//
//  Created by Jeffrey Briner on 4/23/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#include <iostream>
#include "board.hpp"

void Board::move(int startCol, int startRow, int col, int row)
{
    // check if the pieve at startCol and startRow can be moved to col, row
    // move the piece to the col, row
}

void Board::print()
{
    std::cout << "\n" << "________________" << "\n";
    for (int col = 0; col < 8; ++col)
    {
        for (int row = 0; row < 8; ++row)
        {
            std::cout << "|" << (m_board[row][col] ? m_board[row][col]->getPiece() : ' ');
        }
        std::cout << "|\n" << "________________" << "\n";
    }
}
