#include "BinaryWatch.h"
#include "DigitalWatch.h"
#include "RangeException.h"

BinaryWatch::BinaryWatch(std::string newProducer, std::string newName, int newCapacity, int newNumberOfLuminodiodes):
	DigitalWatch(newProducer,newName, newCapacity)
{
	this->numberOfLuminodiodes = newNumberOfLuminodiodes;
}

int BinaryWatch::getNumberOfLuminodiodes()
{
	return this->numberOfLuminodiodes;
}

void BinaryWatch::setNumberOfLuminodiodes(int newNumberOfLuminodiodes)
{
	this->numberOfLuminodiodes = newNumberOfLuminodiodes;
}

void BinaryWatch::headOfTable()
{
	DigitalWatch::headOfTable();
	std::cout << std::setw(25);
	std::cout << "Number of luminodiodes";
}

bool BinaryWatch::operator==(const BinaryWatch & another)
{
	if (this->name == another.name && this->producer == another.producer && this->batteryCapacity == another.batteryCapacity && this->numberOfLuminodiodes == another.numberOfLuminodiodes) {
		return true;
	}
	return false;
}

std::istream& operator>>(std::istream& in, BinaryWatch& watch)
{
	in >> dynamic_cast<DigitalWatch&>(watch);
	watch.numberOfLuminodiodes = RangeException::inputInt(in,1, 50);
	return in;
}

std::ostream& operator<<(std::ostream& out, BinaryWatch& watch)
{
	out << dynamic_cast<Watch&>(watch);
	out << std::setw(25) << std::left;
	out << watch.numberOfLuminodiodes;
	return out;
}
