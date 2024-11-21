#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"
#include <iostream>

class PointArray {
        friend std::ostream& operator<<(std::ostream&, const PointArray&);
        friend std::istream& operator>>(std::istream&, PointArray&);
    public:
        explicit PointArray(int = 10);
        PointArray(const PointArray &);
        size_t getSize() const;

        const PointArray& operator=(const PointArray &);
        bool operator==(const PointArray &) const;
        bool operator !=(const PointArray& right) const {
            return !(*this == right);
        }

        Point& operator[](int);
        Point operator[](int) const;
    private:
        size_t size;
        Point* ptr;
};

#endif