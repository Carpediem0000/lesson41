#include "Book.h"

Book::Book()
{
    this->publisher = "undef";
}

Book::Book(string isbn, string name, string author, int year, string publisher)
    :Edition(isbn, name, author, year)
{
    this->publisher = publisher;
}

string Book::getPublicher() const
{
    return publisher;
}

void Book::show() const
{
    cout << "\t" << type() << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Publisher: " << publisher << endl;
}

string Book::type() const
{
    return "Book";
}
