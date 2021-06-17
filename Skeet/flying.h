//
//  flying.h
//  Skeet
//
//  Created by Baden Hanchett on 6/15/20.
//  Copyright © 2020 Baden Hanchett. All rights reserved.
//

#ifndef flying_h
#define flying_h

#include "point.h"
#include "velocity.h"

class Flying
{
protected:
   Point point;
   Velocity velocity;
   bool alive;

public:
    Flying() : point(0,0), velocity(0,0)
    {
        alive = true;
    }
    Point getPoint() const {return point; }
    Velocity getVelocity() const { return velocity; }
    bool isAlive();
    void setPoint(Point point) { this-> point = point; }
    void setVelocity(Velocity velocity) { this-> velocity = velocity; }
    void kill();
    void advance();
    virtual void draw() = 0;
    
};

#endif /* flying_h */
