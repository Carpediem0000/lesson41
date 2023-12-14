#include "Textbook.h"

Textbook::Textbook()
{
    this->_class = "0";
}

Textbook::Textbook(string isbn, string name, string author, int year, string publisher, string _class)
    :Book(isbn, name, author, year, publisher)
{
    this->_class = _class;
}

string Textbook::get_Class() const
{
    return _class;
}

void Textbook::show() const
{
    Book::show();
    cout << "Class: " << _class << endl;
}

string Textbook::type() const
{
    return "Textbook";
}
