//
//  bullet.cpp
//  Skeet
//
//  Created by Baden Hanchett on 6/15/20.
//  Copyright © 2020 Baden Hanchett. All rights reserved.
//

#include "bullet.h"
#include <cmath>
#define BULLET_SPEED 10.0

void Bullet::fire(Point point, float angle)
{
    float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
    float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));
    
    this->point = point;
    
    this->velocity.setDx(dx);
    this->velocity.setDy(dy);
}
