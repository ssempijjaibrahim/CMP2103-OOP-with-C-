#include <iostream>

class Rectangle {
private:
    // Private data members
    double width;
    double length;

    // Private getter methods (as specified in the image)
    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

public:
    // Public setter methods
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            width = 0;
        }
    }

    void setLength(double l) {
        if (l >= 0) {
            length = l;
        } else {
            length = 0;
        }
    }

    // Public methods to calculate perimeter and area
    double getPerimeter() const {
        return 2 * (getWidth() + getLength());
    }

    double getArea() const {
        return getWidth() * getLength();
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle rect;

    // Set the dimensions using public setters
    rect.setWidth(5.5);
    rect.setLength(4.0);

    // Display the calculated results
    std::cout << "Rectangle Dimensions and Calculations:" << std::endl;
    std::cout << "Perimeter: " << rect.getPerimeter() << std::endl;
    std::cout << "Area:      " << rect.getArea() << std::endl;

    return 0;
}
