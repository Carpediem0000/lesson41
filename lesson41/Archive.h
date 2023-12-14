#pragma once
#include "Catalog.h"
#include "Visitor.h"
#include "Time_.h"
#include <map>
#include <Windows.h>

class Archive
{
protected:
	Catalog catalog;
	map<Time_, Visitor> visitors;
public:
	
	void addVisitor(string name);
	void takeEdition(string name, string isbn);
	void returnEdition(string name, string isbn);

	void showVisitors()const;
	void showCatalog()const;

};

