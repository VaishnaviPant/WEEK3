#include <iostream>
using namespace std;

class Shape
{
public:

    void display()
    {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape
{
public:

    float radius;

    float area()
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape
{
public:

    float length;
    float width;

    float area()
    {
        return length * width;
    }
};

int main()
{
    Circle c;

    cout << "Enter radius: ";
    cin >> c.radius;

    c.display();

    cout << "Circle Area = " << c.area() << endl;


    Rectangle r;

    cout << "\nEnter length: ";
    cin >> r.length;

    cout << "Enter width: ";
    cin >> r.width;

    r.display();

    cout << "Rectangle Area = " << r.area() << endl;

    return 0;
}