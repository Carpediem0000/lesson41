#pragma once
#include "Book.h"
class Textbook :
    public Book
{
protected:
    string _class;
public:
    Textbook();
    Textbook(string isbn, string name, string author, int year, string publisher, string _class);

    string get_Class()const;

    void show()const override;
    string type()const override;
};

