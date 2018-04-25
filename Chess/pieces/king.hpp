//
//  king.hpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#ifndef king_hpp
#define king_hpp

#include <stdio.h>
#include "Piece.hpp"

class King : public Piece
{
public:
    King(int row, int col, char color) : Piece(row, col, color)
    {
        
    }
    
    virtual bool checkMove(int row, int col) override;
    
    virtual char getPiece() override {return 'K';}
};

#endif /* king_hpp */
