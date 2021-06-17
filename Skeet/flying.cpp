//
//  flying.cpp
//  Skeet
//
//  Created by Baden Hanchett on 6/15/20.
//  Copyright © 2020 Baden Hanchett. All rights reserved.
//

#include "flying.h"

bool Flying::isAlive()
{
    return alive;
}

void Flying::kill()
{
    alive = false;
}

void Flying::advance()
{
    point.addX(velocity.getDx());
    point.addY(velocity.getDy());
}
