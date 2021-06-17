//
//  bird.cpp
//  Skeet
//
//  Created by Baden Hanchett on 6/15/20.
//  Copyright © 2020 Baden Hanchett. All rights reserved.
//

#include "bird.h"

int Standard::hit()
{
    kill();
    return numHits;
}

int Tough::hit()
{
    if (numHits == 3)
    {
        kill();
        return numHits;
    }
    numHits++;
    return 1;
}

int Sacred::hit()
{
    kill();
    return -10;
}
