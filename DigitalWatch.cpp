#include "DigitalWatch.h"
#include "RangeException.h"

DigitalWatch::DigitalWatch(std::string newName, std::string newProducer, int newCapaciry):
	Watch(newName,newProducer)
{
	this->batteryCapacity = newCapaciry;
}

int DigitalWatch::getBatteryCapacity()
{
	return this->batteryCapacity;
}

void DigitalWatch::setBatteryCapacity(int newCapacity)
{
	this->batteryCapacity = newCapacity;
}

void DigitalWatch::headOfTable()
{
	Watch::headOfTable();
	std::cout << std::setw(25);
	std::cout << "Battery capacity";
}

bool DigitalWatch::operator==(DigitalWatch & another)
{
	if (dynamic_cast<Watch&>(*this) == dynamic_cast<Watch&>(another)) {
		if (this->batteryCapacity == -1 || another.batteryCapacity == -1 || another.batteryCapacity == this->batteryCapacity) {
			return true;
		}
	}
	return false;
}

std::istream& operator>>(std::istream& in, DigitalWatch& watch)
{
	in >> dynamic_cast<Watch&>(watch);
	watch.batteryCapacity = RangeException::inputInt(in, 1, 10000);
	return in;
}

std::ostream& operator<<(std::ostream& out, DigitalWatch& watch)
{
	out << dynamic_cast<Watch&>(watch);
	out << std::setw(20);
	out << watch.batteryCapacity;
	return out;
}
