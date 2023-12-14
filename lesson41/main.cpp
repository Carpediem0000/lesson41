#include "Catalog.h"

int main() 
{
	Catalog catalog;
	catalog.show();
	cout << "==========================================\n";

	catalog.remove("1234");
	catalog.show();
	cout << "==========================================\n";

	auto obj = catalog["1236"];
	if (obj)
	{
		obj->show();
	}
	delete obj;
}