//
//  board.cpp
//  Chess
//
//  Created by Jeffrey Briner on 4/23/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#include <iostream>
#include "board.hpp"

void Board::move(int startRow, int startCol, int row, int col)
{
    // check if the pieve at startCol and startRow can be moved to col, row
    // move the piece to the col, row
    m_board[row][col] = m_board[startRow][startCol];
    m_board[startRow][startCol] = nullptr;
}

void Board::print()
{
    std::cout << "\n" << "________________" << "\n";
    for (int row = 0; row < 8; ++row)
    {
        for (int col = 0; col < 8; ++col)
        {
            std::cout << "|" << (m_board[row][col] ? m_board[row][col]->getPiece() : ' ');
        }
        std::cout << "|\n" << "________________" << "\n";
    }
}
