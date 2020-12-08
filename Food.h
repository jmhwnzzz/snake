#pragma once
#include "Point.h"
namespace SnakeGame {
    class Food
    {
    private:
        SnakeGame::Point coord;
    public:
        Food(const SnakeGame::Point&);
        void draw(int,int,int,int) const;
        SnakeGame::Point getCoord() const;
    };
}
