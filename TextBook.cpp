#include<iostream>
#include "TextBook.h"
#include <string>

using namespace std;

TextBook::TextBook(string &name, string &author, string &subject, int level, string &publisher, int edition)
{

    this->name=name;
    this->author=author;



    this->subject= subject;
    this->level = level;
    this->publisher=publisher;
    this->edition = edition;
}

    void TextBook::setSubject(string subject)
{
    this ->subject = subject;
}

string TextBook::getSubject()
{
    return subject;
}

int TextBook::getEdition()
{
    return edition;
}

string TextBook::toString()
{
    stringstream edition,price;
    edition << getEdition();
    price << getPrice();
    return getName() + " by " +  ", subject :  " +  name + ", for level : " + getLevel() + ", Edition: " + edition.str() +
    ", price: " + price.str();
}

