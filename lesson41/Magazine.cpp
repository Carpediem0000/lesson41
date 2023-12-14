#include "Magazine.h"

Magazine::Magazine()
{
    this->number = 0;
}

Magazine::Magazine(string isbn, string name, string author, int year, int number)
    :Edition(isbn, name, author, year)
{
    this->number = number;
}

int Magazine::getNum() const
{
    return number;
}

void Magazine::show() const
{
    cout << "\t" << type() << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Number: " << number << endl;
}

string Magazine::type() const
{
    return "Magazine";
}
