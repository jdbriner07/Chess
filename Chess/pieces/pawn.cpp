//
//  pawn.cpp
//  Chess
//
//  Created by Jeffrey Briner on 4/23/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#include "pawn.hpp"

bool Pawn::checkMove(int row, int col)
{
    // need to take in the board and check that their is no other peice in the way
    // need to check taking a peice with the pawn
    if (col == m_col && (m_row == 1 || m_row == 6) && (row == (m_row + 2) || row == (m_row - 2))) {return 1;};
    if (col == m_col && (row == (m_row + 1) || row == (m_row - 1))) {return 1;};
    return 0;
}
