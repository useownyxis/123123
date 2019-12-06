#include "Watch.h"
#include <string>
#include "NameException.h"

Watch::Watch(std::string newProducer, std::string newName)
{
	this->name = newName;
	this->producer = newProducer;
}

std::string Watch::getName()
{
	return this->name;
}

std::string Watch::getProducer()
{
	return this->producer;
}

void Watch::setName(std::string newName)
{
	this->name = newName;
}

void Watch::setProducer(std::string newProducer)
{
	this->producer = newProducer;
}

void Watch::headOfTable()
{
	std::cout << "Producer";
	std::cout << std::setw(25);
	std::cout << "Name";
}

bool Watch::operator==(const Watch & another)
{
	if (this->name == "" || another.name == "" || this->name == another.name) {
		if (this->producer == "" || another.producer == "" || this->producer == another.producer) {
			return true;
		}
	}
	return false;
}

std::istream& operator>>(std::istream& in, Watch& watch)
{
	watch.producer = NameException::inputString(in);
	watch.name = NameException::inputString(in);
	return in;
}

std::ostream& operator<<(std::ostream& out, const Watch& watch)
{
	out << watch.producer;
	out << std::setw(35 - watch.producer.size()) ;
	out << watch.name;
	return out;
}
