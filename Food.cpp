#include "Food.h"
SnakeGame::Food::Food(const Point& coord)
{
    this->coord = coord;
}
void SnakeGame::Food::draw(int cornerX, int cornerY, int unitWidth, int unitHeight)const
{
    this->coord.draw(cornerX, cornerY, unitWidth, unitHeight);
}
SnakeGame::Point SnakeGame::Food::getCoord() const
{
    return this->coord;
}
