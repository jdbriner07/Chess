//
//  board.hpp
//  Chess
//
//  Created by Jeffrey Briner on 4/23/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#ifndef board_hpp
#define board_hpp

#include <stdio.h>
#include "Piece.hpp"
#include "pieces/pawn.hpp"
#include "pieces/king.hpp"
#include "pieces/queen.hpp"
#include "pieces/knight.hpp"
#include "pieces/rook.hpp"
#include "pieces/bishop.hpp"

class Board
{
    Piece *m_board[8][8] {nullptr};
    
public:
    Board()
    {
        for (int i = 0; i < 8; ++i) {
            m_board[1][i] = dynamic_cast<Piece*>(new Pawn(1, i, 'w'));
            m_board[6][i] = dynamic_cast<Piece*>(new Pawn(6, i, 'b'));
        }
        m_board[0][0] = dynamic_cast<Piece*>(new Rook(0, 0, 'w'));
        m_board[0][1] = dynamic_cast<Piece*>(new Knight(0, 1, 'w'));
        m_board[0][2] = dynamic_cast<Piece*>(new Bishop(0, 2, 'w'));
        m_board[0][3] = dynamic_cast<Piece*>(new Queen(0, 3, 'w'));
        m_board[0][4] = dynamic_cast<Piece*>(new King(0, 4, 'w'));
        m_board[0][5] = dynamic_cast<Piece*>(new Bishop(0, 5, 'w'));
        m_board[0][6] = dynamic_cast<Piece*>(new Knight(0, 6, 'w'));
        m_board[0][7] = dynamic_cast<Piece*>(new Rook(0, 7, 'w'));
        
        m_board[7][0] = dynamic_cast<Piece*>(new Rook(7, 0, 'b'));
        m_board[7][1] = dynamic_cast<Piece*>(new Knight(7, 1, 'b'));
        m_board[7][2] = dynamic_cast<Piece*>(new Bishop(7, 2, 'b'));
        m_board[7][3] = dynamic_cast<Piece*>(new Queen(7, 3, 'b'));
        m_board[7][4] = dynamic_cast<Piece*>(new King(7, 4, 'b'));
        m_board[7][5] = dynamic_cast<Piece*>(new Bishop(7, 5, 'b'));
        m_board[7][6] = dynamic_cast<Piece*>(new Knight(7, 6, 'b'));
        m_board[7][7] = dynamic_cast<Piece*>(new Rook(7, 7, 'b'));
    }
    
    void move(int startRow, int startCol, int row, int col);
    
    void print();
    
    auto operator[] (int row) {return m_board[row];}
};

#endif /* board_hpp */
