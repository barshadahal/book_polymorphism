#include<iostream>
#include <string>
#include "Book.h"

# ifndef TEXTBOOK_H
# define TEXTBOOK_H
using namespace std;

class TextBook::public Book
{

public:
    Textbook(string &,Author &, string, int, string &, int);
    string getSubject();
    int getEdition();

private:
    string subject;
    int edition;
};
# endif
