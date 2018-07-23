//
//  queen.cpp
//  Chess
//
//  Created by Jeffrey Briner on 4/24/18.
//  Copyright © 2018 Jeffrey Briner. All rights reserved.
//

#include "queen.hpp"
#include <cmath>

bool Queen::checkMove(int row, int col)
{
    double xdif(m_col - col);
    double ydif(m_row - row);
    if (std::abs(xdif) == std::abs(ydif)) {
        return 1;
    } else if (m_row == row || m_col == col) {
        return 1;
    }
    return 0;
}
