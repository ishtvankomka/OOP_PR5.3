#pragma once
#include <iostream>
#include <string>

class A
{
protected:
    int x;
public:
    A(int x = 0)
    {
        this->x = x;
    }
};

class B : public A
{
    int y;
public:
    B(int x = 0, int y = 0)
    : A(x)
    {
        this->y = y;
    }
    
    B get_B(B& b)
    {
        return b;
    }
    
    B get_B(A& a)
    {
        throw a;
    }
    
    int get_y() { return y; };
};
