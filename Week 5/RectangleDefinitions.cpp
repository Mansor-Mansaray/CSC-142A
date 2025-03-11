#include "Rectangle.h.cpp"


Rectangle::Rectangle() : length(0), width(0) {}

void Rectangle::setLength(double len) {
    if (len > 0) length = len;
}

void Rectangle::setWidth(double wid) {
    if (wid > 0) width = wid;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getArea() const {
    return length * width;
}
