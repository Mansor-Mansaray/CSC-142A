// Mansor Amond-Mansaray The file declares the Rectangle class. It has two private member variables, length and width, and public member functions to set and get the values of these variables, and to calculate the area of the rectangle.

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle();

    void setLength(double len);
    void setWidth(double wid);

    double getLength() const;
    double getWidth() const;
    
    double getArea() const;
};

#endif