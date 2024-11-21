#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
    private:
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) {
        x=_x; 
        y=_y; 
        }
        Point(const Point &o) {
            x = o.x;
            y = o.y;
        }
        void setX(int x) {
            this->x = x;
        }
        void setY(int y) {
            this->y = y;
        } 
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }
        bool operator==(const Point& other) const {
               return x == other.x && y == other.y;
        }
        bool operator!=(const Point& other) const {
               return x != other.x && y!= other.y;
        }

};
#endif
