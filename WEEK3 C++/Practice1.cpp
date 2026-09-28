#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    float marks;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter marks: ";
    cin >> s.marks;

    s.display();

    return 0;
}