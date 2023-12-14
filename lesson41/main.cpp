#include "Catalog.h"
#include "Visitor.h"
#include "Archive.h"

int main() 
{
	//Catalog catalog;
	/*catalog.show();
	cout << "==========================================\n";

	Visitor Vanya("Vanya");

	Vanya.takeEdition(catalog["1230"]);
	catalog.remove("1230");
	cout << "=====================================\n";
	Vanya.show();
	cout << "=====================================\n";
	catalog.show();
	cout << "=====================================\n";*/

	Archive archive;
	archive.showCatalog();
	


	archive.addVisitor("Vanya");
	Sleep(2000);
	archive.addVisitor("Vasya");
	Sleep(2000);
	archive.addVisitor("Lena+size");

	archive.takeEdition("Vasya", "345");
	archive.takeEdition("Vanya", "1230");
	cout << "=====================================\n";

	archive.showCatalog();
	archive.showVisitors();
	cout << "=====================================\n";
	archive.returnEdition("Vanya", "1230");
	archive.showCatalog();
	archive.showVisitors();
}