#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Point.h"
#include "PointArray.h"
using namespace std;

PointArray::PointArray(int PointArraySize) 
        : size(PointArraySize > 0 ? static_cast<size_t>(PointArraySize) :
            throw invalid_argument{"PointArray size must be greater than 0"}),
        ptr{new Point[size]}{
}
size_t PointArray::getSize() const {
    return size;
}

const PointArray& PointArray::operator=(const PointArray& right) {
    if(&right != this) {
        if(size != right.size) {
            delete[] ptr;
            size = right.size;
            ptr = new Point[size];
        }
        for(size_t i{0}; i < size; i++) {
            ptr[i] = right.ptr[i];
        }
    }
    return *this;
}

bool PointArray::operator==(const PointArray& right) const {
    if(size != right.size) {
        return false;
    }
    for(size_t i{0}; i < size; ++i) {
        if(ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    return true;
}
Point& PointArray::operator[](int subscript) {
    if(subscript < 0 || subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }
    return ptr[subscript];
}

Point PointArray::operator[](int subscript) const {
    if(subscript < 0 || subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }
    return ptr[subscript];
}