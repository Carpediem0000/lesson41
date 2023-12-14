#include "Edition.h"

Edition::Edition()
{
    this->isbn = "000";
    this->author = "none";
    this->name = "none";
    this->year = 2023;
}

Edition::Edition(string isbn, string name, string author, int year)
{
    this->isbn = isbn;
    this->name = name;
    this->author = author;
    this->year = year;
}

Edition::~Edition()
{
}

string Edition::getIsbn() const
{
    return isbn;
}

string Edition::getName() const
{
    return name;
}

string Edition::getAuthor() const
{
    return author;
}

int Edition::getYear() const
{
    return year;
}
