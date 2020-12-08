#pragma once
namespace SnakeGame {
    class Point
    {
    private:
        int x;
        int y;
    public:
        Point(int = 0, int = 0);
        void setXY(int, int);
        void draw(int, int,int,int) const;
        int getX() const;
        int getY() const;
        bool operator==(const Point&) const;
    };
};
