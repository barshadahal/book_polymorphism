
#include <string>
using namespace std;

#ifndef AUTHOR_H
#define AUTHOR_H

class Author
{
public:
    Author( string, string, char );
    Author();
    void setEmail(string );
    string getName();
    string getEmail();
    char getGender();
    string toString();

private:
    string name;
    string email;
    char gender;

};
#endif
