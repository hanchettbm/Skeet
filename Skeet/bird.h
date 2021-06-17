//
//  bird.hpp
//  Skeet
//
//  Created by Baden Hanchett on 6/15/20.
//  Copyright © 2020 Baden Hanchett. All rights reserved.
//

#ifndef bird_h
#define bird_h

#include "flying.h"
#include "uiDraw.h"

class Bird : public Flying
{
protected:
    int numHits;
    
    
public:
    
    Bird() : Flying()
    {
        numHits = 1;
    };
    
    Bird(Point p) :Flying()
    {
        point = p;
        numHits = 1;
    };
    
    virtual int hit() = 0;
    
};

class Standard : public Bird
{
private:
    
    
public:
    Standard() : Bird()
    {
        
    }
    Standard(Point p) : Bird(p)
    {
        
    }
    virtual int hit();
    virtual void draw() { drawCircle(point, 15); }
    
};

class Tough : public Bird
{
private:
    
public:
    Tough() : Bird()
    {
        
    }
    virtual int hit();
    virtual void draw() { drawToughBird(point, 15, numHits); }
    
};

class Sacred : public Bird
{
private:
    
public:
    Sacred() : Bird()
    {
        
    }
    virtual int hit();
    virtual void draw() {drawSacredBird(point, 15); }
};

#endif /* bird_hpp */
