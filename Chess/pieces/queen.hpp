//
//  queen.hpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#ifndef queen_hpp
#define queen_hpp

#include <stdio.h>
#include "Piece.hpp"

class Queen : public Piece
{
public:
    Queen(int row, int col, char color) : Piece(row, col, color)
    {
        
    }
    
    virtual bool checkMove(int row, int col) override;
    
    virtual char getPiece() override {return 'Q';}
};


#endif /* queen_hpp */
