#include "Catalog.h"

Catalog::Catalog()
{
    catalog.insert(new Book("1236", "asdasd", "asdasd", 2013, "ABOBA"));
    catalog.insert(new Magazine("1232", "Vova", "Zelenskiq", 2022, 372));
    catalog.insert(new Textbook("1230", "Vova", "Zelenskiq", 2022, "0372", "10"));
}

Catalog::~Catalog()
{
    for (auto obj : catalog)
    {
        delete obj;
    }
    catalog.clear();
}

void Catalog::add(Edition* obj)
{
    catalog.insert(obj);
}

void Catalog::remove(string isbn)
{
    for (auto obj : catalog)
    {
        if (obj->getIsbn() == isbn)
        {
            cout << "Delete: " << obj->getName() << endl;
            catalog.erase(obj);
            delete obj;
            return;
        }
    }
    cout << "Note found!\n";
}

void Catalog::show() const
{
    for (auto obj : catalog)
    {
        cout << "-------------------------------\n";
        obj->show();
        cout << "-------------------------------\n";
    }
}

const Edition* Catalog::operator[](string isbn) const
{
    for (auto obj : catalog)
    {
        if (obj->getIsbn() == isbn)
        {
            return obj;
        }
    }
    return nullptr;
}
