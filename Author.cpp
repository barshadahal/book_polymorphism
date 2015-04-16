
#include<iostream>
#include <string>
#include "Author.h"
using namespace std;

Author:: Author (string m_name, string m_email, char m_gender)
{
    name = m_name;
    setEmail(m_email);
    gender = m_gender;

}

Author :: Author()
{

}

void Author:: setEmail(string m_email)
{
    email = m_email;
}

string Author::getName()
{
    return name;
}
string Author::getEmail()
{
    return email;
}
char Author::getGender()
{
    return gender;
}

string Author::toString()
{
    return  getName() + " at " + getEmail() ;
}


