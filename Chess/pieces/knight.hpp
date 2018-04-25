//
//  knight.hpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#ifndef knight_hpp
#define knight_hpp

#include <stdio.h>
#include "Piece.hpp"
class Knight : public Piece
{
public:
    Knight(int row, int col, char color) : Piece(row, col, color)
    {
        
    }
    
    virtual bool checkMove(int row, int col) override;
    
    virtual char getPiece() override {return 'k';}
};

#endif /* knight_hpp */
