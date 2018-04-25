//
//  rook.hpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#ifndef rook_hpp
#define rook_hpp

#include <stdio.h>

#endif /* rook_hpp */

#include "Piece.hpp"
class Rook : public Piece
{
public:
    Rook(int row, int col, char color) : Piece(row, col, color)
    {
        
    }
    
    virtual bool checkMove(int row, int col) override;
    
    virtual char getPiece() override {return 'r';}
};
