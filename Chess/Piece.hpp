//
//  Piece.hpp
//  Chess
//
//  Created by Jeffrey Briner on 4/23/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#ifndef Piece_hpp
#define Piece_hpp

#include <stdio.h>

class Piece
{
    int m_col;
    int m_row;
    char m_color;
    
public:
    Piece(int row, int col, char color) : m_col(col), m_row(row), m_color(color)
    {
        
    }
    
    virtual bool checkMove(int row, int col) = 0;
    virtual char getPiece() = 0;
    
    int getCol(){return m_col;}
    int getRow(){return m_row;}
    char getColor(){return m_color;}
    
    void move(int row, int col) {
        m_row = row;
        m_col = col;
    }
};

#endif /* Piece_hpp */
