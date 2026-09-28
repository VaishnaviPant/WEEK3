#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    float basicSalary;

    float calculateSalary()
    {
        return basicSalary;
    }
};

int main()
{
    Employee emp;

    cout << "Enter employee name: ";
    getline(cin, emp.name);

    cout << "Enter employee ID: ";
    cin >> emp.id;

    cout << "Enter basic salary: ";
    cin >> emp.basicSalary;

    cout << "\n--- Employee Details ---\n";
    cout << "Name: " << emp.name << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Salary: " << emp.calculateSalary() << endl;

    return 0;
}