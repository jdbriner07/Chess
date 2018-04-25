//
//  pawn.hpp
//  Chess
//
//  Created by Jeffrey Briner on 4/23/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#ifndef pawn_hpp
#define pawn_hpp

#include <stdio.h>
#include "Piece.hpp"

class Pawn : public Piece
{
public:
    Pawn(int row, int col, char color) : Piece(row, col, color)
    {
        
    }
    
    virtual bool checkMove(int row, int col) override;
    
    virtual char getPiece() override {return 'p';}
};

#endif /* pawn_hpp */
