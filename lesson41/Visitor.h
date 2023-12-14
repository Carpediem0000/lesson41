#pragma once
#include "Edition.h"
#include <vector>

class Visitor
{
protected:
	string name;
	vector<const Edition*> myList;
public:
	Visitor() {
		this->name = "Noname";
	}
	Visitor(string name) {
		this->name = name;
	}

	void takeEdition(const Edition* obj) {
		if (!obj)
		{
			cout << "Error>>Edition is empty!\n";
			return;
		}
		this->myList.push_back(obj);
	}
	const Edition* returnEdition(string isbn) {
		Edition* item;
		for (int i = 0; i < myList.size(); ++i)
		{
			if (myList[i]->getIsbn() == isbn)
			{
				item = (Edition*)myList[i];
				myList.erase(myList.begin() + i);
				return item;
			}
		}
		return nullptr;
	}
	void show()const {
		cout << "Visitor: " << name << endl;
		cout << "Amount of edition: " << myList.size() << endl;
		cout << "====================================\n";
		for (auto obj : myList)
		{
			obj->show();
		}
		cout << "====================================\n";
	}

	int getAmountOfEdition()const {
		return myList.size();
	}

	string getName()const {
		return name;
	}
};

