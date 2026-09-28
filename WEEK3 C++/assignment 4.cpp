#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    virtual void area() = 0;
};

// Derived class Rectangle
class Rectangle : public Shape
{
public:
    float length;
    float width;

    void area()
    {
        cout << "Area of Rectangle = "
             << length * width << endl;
    }
};

// Derived class Circle
class Circle : public Shape
{
public:
    float radius;

    void area()
    {
        cout << "Area of Circle = "
             << 3.14159 * radius * radius << endl;
    }
};

int main()
{
    Rectangle r;

    r.length = 10;
    r.width = 5;

    Circle c;

    c.radius = 7;

    r.area();
    c.area();

    return 0;
}