
#include "Magazine.h"
#include "Textbook.h"

int main() 
{
	Book a("1234", "asdasd", "asdasd", 2013, "ABOBA");
	a.show();

	Magazine a1("1235", "Vova", "Zelenskiq", 2022, 372);
	a1.show();

	Textbook a2("1235", "Vova", "Zelenskiq", 2022, "0372", "10");
	a2.show();
}