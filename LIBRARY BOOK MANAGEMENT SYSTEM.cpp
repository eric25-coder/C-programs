//ERIK MUKIRI CT101/G/29069/25

#include <iostream>
#include<string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int copies;

public:

    void inputDetails()
    {
        cout << "ENTER BOOK TITLE: ";
        cin>> title;

        cout << "ENTER AUTHOR NAME: ";
        cin>> author;

        cout << "ENTER NUMBER OF COPIES AVAILABLE: ";
        cin >> copies;
    }


    void borrowBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "Book borrowed successfully!" << endl;
        }
        else
        {
            cout << "Sorry, no copies are available." << endl;
        }
    }


    void displayDetails()
    {
        cout << " BOOK DETAILS" << endl;
        cout<<"__________________"<<endl;
        cout << "TITLE: " << title << endl;
        cout << "AUTHOR: " << author << endl;
        cout << "AVAILABLE COPIES: " << copies << endl;
    }
};

int main()
{
    Book book1;


    book1.inputDetails();


    cout << "Before borrowing:";
    book1.displayDetails();


    book1.borrowBook();


    cout << "After borrowing:";
    book1.displayDetails();

    return 0;
}
