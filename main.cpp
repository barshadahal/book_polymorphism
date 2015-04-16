
#include<iostream>

#include "Book.h"
#include "Novel.h"
#include "TextBook.h"

using namespace std;

int main()
{
    string authorName, authorEmail, authorGender;
    float bookPrice;
    int quantity;

    cout<< "Enter name of the author: ";
    getline(cin,authorName);
    cin.get();

    cout<< "Enter mail id of author: ";
    cin>> authorEmail;
    cin.get();
    cout<< "Enter gender of author: ";
    cin>> authorGender;
    cin.get();
    Author author1(authorName,authorEmail,authorGender);

    cout << "Enter the information of Novel" << "\n";

    cout<< "Enter book name: ";
    getline(cin,bookName);


    cout<< "Enter price of the book: ";
    cin>> bookPrice;
    cin.get();

    cout<< "Enter quantity of book in stake: ";
    cin>> quantity

    cout<< "Enter genre of book: ";
    cin>> bookgenre


    Novel novel1(bookName,author1,bookprice,quantity,genre);
    Book *book1 = &novel1;
    book1->toString();

    cin.get();
    cout << "\nEnter the details of TextBook" << endl;
    cout << "Enter name of Textbook:" << endl;
    cin >> bookName ;
    cout << "Enter price of each book:" << endl;
    cin >> bookPrice;
    cout << "Enter the level who use this book:" << endl;
    cin >> book_level;
    cout << "Enter the subject to which it belongs:" << endl;
    cin >> book_subject;

    TextBook textbook1(bookName,author1,bookPrice,book_level,book_subject);
    Book *book2 = &textbook1;

    book2->toString();

    cout << "\nThe total price of novel is Rs" << novel1.getPrice() endl;
    cout << book1->totalPrice() << "\n";
    cout << "The total price of textbook is RS" << textbook1.getPrice()  endl;
    return 0;
}
