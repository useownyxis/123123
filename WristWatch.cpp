#include "WristWatch.h"
#include "RangeException.h"

WristWatch::WristWatch(std::string newProducer, std::string newName, std::string newMechanism, int newDialSize):
	MechanicalWatch(newProducer, newName, newMechanism)
{
	this->dialSize = newDialSize;
}

int WristWatch::getDialSize()
{
	return this->dialSize;
}

void WristWatch::setDialSize(int newDialSize)
{
	this->dialSize = newDialSize;
}

void WristWatch::headOfTable()
{
	MechanicalWatch::headOfTable();
	std::cout << std::setw(25);
	std::cout << "Dial size";
}

bool WristWatch::operator==(const WristWatch & another)
{
	if (this->name == another.name && this->producer == another.producer && this->mechanismDesign == another.mechanismDesign && this->dialSize == another.dialSize) {
		return true;
	}
	return false;
}

std::istream& operator>>(std::istream& in, WristWatch& watch)
{
	in >> dynamic_cast<MechanicalWatch&>(watch);
	watch.dialSize = RangeException::inputInt(in, 1, 50);
	return in;
}

std::ostream& operator<<(std::ostream& out, WristWatch& watch)
{
	out << dynamic_cast<MechanicalWatch&>(watch);
	out << std::setw(25) << std::left;
	out << watch.dialSize;
	return out;
}
