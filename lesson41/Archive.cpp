#include "Archive.h"

void Archive::addVisitor(string name)
{
	visitors[Time_()] = Visitor(name);
}

void Archive::takeEdition(string name, string isbn)
{
	for (auto& obj : visitors)
	{
		if (obj.second.getName() == name)
		{
			obj.second.takeEdition(catalog[isbn]);
			if (!catalog[isbn]) return;
			cout << "Name: " << name << " take: " << catalog[isbn]->getName() << endl;
			catalog.remove(isbn);
			break;
		}
	}
}

void Archive::returnEdition(string name, string isbn)
{
	for (auto& obj : visitors)
	{
		if (obj.second.getName() == name)
		{
			auto item = obj.second.returnEdition(isbn);
			cout << "Name: " << name << " return: " << obj.second.returnEdition(isbn)->getName() << endl;
			catalog.add((Edition*)item);
			break;
		}
	}
}

void Archive::showVisitors() const
{
	for (auto obj : visitors)
	{
		cout << "-----------------------------\n";
		obj.second.show();
		cout << "-----------------------------\n";
	}
}

void Archive::showCatalog() const
{
	catalog.show();
}
