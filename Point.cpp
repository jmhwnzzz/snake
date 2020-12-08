#include "Point.h"
#include <iostream>
#include <graphics.h>
using namespace std;
SnakeGame::Point::Point(int x, int y)
{
    this->setXY(x, y);
}
void SnakeGame::Point::setXY(int x, int y)
{
    this->x = x;
    this->y = y;
}
void SnakeGame::Point::draw(int cornerX, int corenrY, int unitWidth, int unitHeight) const
{
    fillellipse(cornerX+unitWidth / 2+this->x* unitWidth, cornerX + unitHeight / 2+ this->y* unitHeight, unitWidth/2, unitHeight/2);
}
int SnakeGame::Point::getX() const
{
    return this->x;
}
int SnakeGame::Point::getY() const
{
    return this->y;
}
bool SnakeGame::Point::operator==(const Point& other) const
{
    return this->getX() == other.getX() && this->getY() == other.getY();
}
