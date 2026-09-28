#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookId;
    string title;
    string author;
    bool available;

public:

    // Constructor
    Book(int id, string t, string a)
    {
        bookId = id;
        title = t;
        author = a;
        available = true;
    }

    // Display book details
    void displayBook()
    {
        cout << "\nBook ID   : " << bookId << endl;
        cout << "Title     : " << title << endl;
        cout << "Author    : " << author << endl;

        if(available)
            cout << "Status    : Available" << endl;
        else
            cout << "Status    : Issued" << endl;
    }

    // Issue book
    void issueBook()
    {
        if(available)
        {
            available = false;
            cout << "\nBook issued successfully!" << endl;
        }
        else
        {
            cout << "\nBook is already issued." << endl;
        }
    }

    // Return book
    void returnBook()
    {
        if(!available)
        {
            available = true;
            cout << "\nBook returned successfully!" << endl;
        }
        else
        {
            cout << "\nBook was not issued." << endl;
        }
    }
};

int main()
{
    Book book1(101, "The Alchemist", "Paulo Coelho");
    Book book2(102, "Wings of Fire", "A.P.J. Abdul Kalam");

    int choice;

    do
    {
        cout << "\n========== LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout << "1. Display Book 1\n";
        cout << "2. Display Book 2\n";
        cout << "3. Issue Book 1\n";
        cout << "4. Return Book 1\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                book1.displayBook();
                break;

            case 2:
                book2.displayBook();
                break;

            case 3:
                book1.issueBook();
                break;

            case 4:
                book1.returnBook();
                break;

            case 5:
                cout << "\nThank you for using the Library System!" << endl;
                break;

            default:
                cout << "\nInvalid choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}