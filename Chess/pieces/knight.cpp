//
//  knight.cpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#include "knight.hpp"

bool Knight::checkMove(int row, int col)
{
    if ((m_col == col + 2 || m_col == col - 2) && (m_row == row + 1 || m_row == row - 1)) {return 1;};
    if ((m_col == col + 1 || m_col == col - 1) && (m_row == row + 2 || m_row == row - 2)) {return 1;};
    return 0;
}
