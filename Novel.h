#include <string>
#include "Book.h"
#ifndef NOVEL_H
#define NOVEL_H
using namespace std;

class Novel :: public Book
{

public:
    Novel();
    Novel(string &, Author &, double , int ,  string &, int, bool , int);
    void setRating(int);
    int getRating();

    string getGenre();

    void setAgeGroup(int);
    int getAgeGroup();

    string toString();

private:
    string genre;
    int rating;
    int agegroup;

};
#endif

