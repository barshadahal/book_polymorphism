#include<iostream>
#include <string>
#include "Novel.h"

using namespace std;


Novel:: Novel ( string &name, Author &author, float price, int quantity, string genere, bool isfictional, int rating, int agegroup):
        : Book(name,author,price,quantity )
{

    this->name=name;
    this->author=author;
    this->price=price;
    this->quantity=quantity;
    this->genre=genre;
    setIsFictional(isfictional);
    setRating=rating;
    setAgeGroup(ageGroup);
}

    void Novel::setRating(int book_rating)
    {

        this->rating  = rating;
    }

    int Novel::getRating()
    {
        return rating;
    }
    int Novel::getAge_group()
    {

        return agegroup;
    }
    string Novel::getGenere()
    {
        return genere;
    }
    bool Novel :: getIsFiction()
    {
        return isfictional;
    }

    string Novel::toString()
    {
        stringstream price;

        price << getPrice();
        if(getIsFiction()==1){
        return   getName() + " by " + author.toString() + " for agegroup of: " + getAgeGroup() + " Genre : " + getGenre() +
         " and is fictional with price "  + price.str();
       }
       else if(getIsFiction()==0) {
                return  getName() + " by " + author.toString() + " for agegroup of: " + getAgeGroup() + " Genre : " + getGenre() +
       " and is non fictional with price " + price.str()  ;
       }

    }




