//
//  rook.cpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#include "rook.hpp"

bool Rook::checkMove(int row, int col)
{
    if (m_row == row || m_col == col) {
        return 1;
    }
    return 0;
}
