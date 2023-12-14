#pragma once
#include <string>
#include <iostream>
using namespace std;

class Edition
{
protected:
	string isbn;
	string name;
	string author;
	int year;
public:
	Edition();
	Edition(string isbn, string name, string author, int year);
	~Edition();

	string getIsbn()const;
	string getName()const;
	string getAuthor()const;
	int getYear()const;

	virtual void show()const = 0;
	virtual string type()const = 0;

};

