#pragma once
#include <set>
#include <algorithm>
#include "Textbook.h"
#include "Magazine.h"

struct CMPEdition
{
	bool operator()(const Edition* left, const Edition* right) const{
		return atoi(left->getIsbn().c_str()) < atoi(right->getIsbn().c_str());
	}
};

class Catalog
{
protected:
	set<Edition*, CMPEdition> catalog;
public:
	Catalog();
	~Catalog();

	void add(Edition* obj);
	void remove(string isbn);
	void show()const;
	const Edition* operator[](string isbn)const;
};

