#include <iostream>
#include <string>
using namespace std;

class Student
{
public:

    // Constructor 1: No arguments
    Student()
    {
        cout << "Default Constructor" << endl;
    }

    // Constructor 2: One argument
    Student(int age)
    {
        cout << "Age: " << age << endl;
    }

    // Constructor 3: Two arguments
    Student(int age, string name)
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    cout << endl;

    Student s2(18);

    cout << endl;

    Student s3(18, "Vaishnavi");

    return 0;
}