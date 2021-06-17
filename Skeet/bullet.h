//
//  bullet.hpp
//  Skeet
//
//  Created by Baden Hanchett on 6/15/20.
//  Copyright © 2020 Baden Hanchett. All rights reserved.
//

#ifndef bullet_h
#define bullet_h

#include "flying.h"
#include "uiDraw.h"

class Bullet : public Flying
{
private:
    float angle;
    float dx;
    float dy;
    
public:
    Bullet() : Flying()
    {
        angle = 0;
        dx = 0;
        dy = 0;
    };

    void fire(Point point, float angle);
    virtual void draw() { drawDot(point); }
};

#endif /* bullet_hpp */
