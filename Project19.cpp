
#include "Card.h"
using namespace std;

int main()
{
	Card a;
	a.setName("AA");
	a.setName("Pipenko Denys");
	a.setPin(7334, 7890);

	Card b("Abdul Dzabar", "01.99", 5'000);

	a.showInfo();
	b.showInfo();

}

