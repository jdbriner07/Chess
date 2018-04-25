//
//  bishop.hpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#ifndef bishop_hpp
#define bishop_hpp

#include <stdio.h>
#include "Piece.hpp"
class Bishop : public Piece
{
public:
    Bishop(int row, int col, char color) : Piece(row, col, color)
    {
        
    }
    
    virtual bool checkMove(int row, int col) override;
    
    virtual char getPiece() override {return 'b';}
};

#endif /* bishop_hpp */
