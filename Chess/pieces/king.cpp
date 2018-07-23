//
//  king.cpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#include "king.hpp"
#include <iostream>

bool King::checkMove(int row, int col)
{
    if ( (m_row + 1 >= row && m_row - 1 <= row) && (m_col + 1 >= col && m_col - 1 <= col) ) {
            return 1;
    }
    return 0;
}
