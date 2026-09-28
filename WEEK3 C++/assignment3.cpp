#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    void display()
    {
        cout << "This is a shape." << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
public:
    float length, width;

    float area()
    {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape
{
public:
    float radius;

    float area()
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    Rectangle r;

    cout << "Enter length of rectangle: ";
    cin >> r.length;

    cout << "Enter width of rectangle: ";
    cin >> r.width;

    cout << "\nRectangle:\n";
    r.display();
    cout << "Area = " << r.area() << endl;


    Circle c;

    cout << "\nEnter radius of circle: ";
    cin >> c.radius;

    cout << "\nCircle:\n";
    c.display();
    cout << "Area = " << c.area() << endl;

    return 0;
}