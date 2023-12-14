#pragma once
#include "Edition.h"
class Book :
    public Edition
{
protected:
    string publisher;

public:
    Book();
    Book(string isbn, string name, string author, int year, string publisher);

    string getPublicher()const;

    void show()const override;
    string type()const override;
};

