#include "MechanicalWatch.h"
#include"NameException.h"

MechanicalWatch::MechanicalWatch(std::string newProducer, std::string newName, std::string newMechanism):
	Watch(newProducer, newName)
{
	this->mechanismDesign = newMechanism;
}

std::string MechanicalWatch::getMechanismDesign()
{
	return this->mechanismDesign;
}

void MechanicalWatch::setMechanismDesign(std::string newMechanism)
{
	this->mechanismDesign = newMechanism;
}

void MechanicalWatch::headOfTable()
{
	Watch::headOfTable();
	std::cout << std::setw(25);
	std::cout << "Mechanism";
}

bool MechanicalWatch::operator==(const MechanicalWatch & another)
{
	if (this->name == another.name && this->producer == another.producer && this->mechanismDesign == another.mechanismDesign) {
		return true;
	}
	return false;
}

std::istream& operator>>(std::istream& in, MechanicalWatch& watch)
{
	in >> dynamic_cast<Watch&>(watch);
	watch.mechanismDesign = NameException::inputString(in);
	return in;
}

std::ostream& operator<<(std::ostream& out, MechanicalWatch& watch)
{
	out << dynamic_cast<Watch&>(watch);
	out << std::setw(25) << std::left;
	out << watch.mechanismDesign;
	return out;
}
