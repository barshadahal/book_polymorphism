
#include <string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H

class Book
{
public:
    Book(string , Author , float  , int  );
    void setPrice(float m_price);
    void setQuantity (int m_quantity);
    string getName();
    Author getAuthor();
    float getPrice();
    int getQuantity();
    string toString();

    virtual void toString() = 0;

protected:
    string name;
    Author author;
    float price;
    int quantity;

};
#endif
