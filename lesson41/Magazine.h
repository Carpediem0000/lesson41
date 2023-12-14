#pragma once
#include "Edition.h"
class Magazine :
    public Edition
{
protected:
    int number;

public:
    Magazine();
    Magazine(string isbn, string name, string author, int year, int number);

    int getNum()const;

    void show()const override;
    string type()const override;
};

