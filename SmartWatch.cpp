#include "SmartWatch.h"
#include "RangeException.h"

SmartWatch::SmartWatch(std::string newProducer, std::string newName, int newCapacity, int newDisplaySize):
	DigitalWatch(newProducer, newName, newCapacity)
{
	this->displaySize = newDisplaySize;
}

int SmartWatch::getDisplaySize()
{
	return this->displaySize;
}

void SmartWatch::setDisplaySize(int newDisplaySize)
{
	this->displaySize = newDisplaySize;
}

void SmartWatch::headOfTable()
{
	DigitalWatch::headOfTable();
	std::cout << std::setw(25);
	std::cout << "Display Size";
}

bool SmartWatch::operator==(SmartWatch & another)
{
	if (dynamic_cast<DigitalWatch&>(*this) == dynamic_cast<DigitalWatch&>(another)) {
		if (this->displaySize == -1 || another.displaySize == -1 || another.displaySize == this->displaySize) {
			return true;
		}
	}
	return false;
}

std::istream& operator>>(std::istream& in, SmartWatch& watch)
{
	in >> dynamic_cast<DigitalWatch&>(watch);
	watch.displaySize = RangeException::inputInt(in, 1, 50);
	return in;
}

std::ostream& operator<<(std::ostream& out, SmartWatch& watch)
{
	out << dynamic_cast<DigitalWatch&>(watch);
	out << std::setw(25);
	out << watch.displaySize;
	return out;
}
