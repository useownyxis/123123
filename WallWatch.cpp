#include "WallWatch.h"
#include "RangeException.h"

WallWatch::WallWatch(std::string newProducer, std::string newName, std::string newMechanism, int newFootprint):
	MechanicalWatch(newProducer, newName, newMechanism)
{
	this->footprint = newFootprint;
}

int WallWatch::getFootprint()
{
	return this->footprint;
}

void WallWatch::setFootpring(int newFootprint)
{
	this->footprint = newFootprint;
}

void WallWatch::headOfTable()
{
	MechanicalWatch::headOfTable();
	std::cout << std::setw(25);
	std::cout << "Footprint";
}

bool WallWatch::operator==(const WallWatch & another)
{
	if (this->name == another.name && this->producer == another.producer && this->mechanismDesign == another.mechanismDesign && this->footprint == another.footprint) {
		return true;
	}
	return false;
}

std::istream& operator>>(std::istream& in, WallWatch& watch)
{
	in >> dynamic_cast<MechanicalWatch&>(watch);
	watch.footprint = RangeException::inputInt(in, 1 , 50);
	return in;
}

std::ostream& operator<<(std::ostream& out, WallWatch& watch)
{
	out << dynamic_cast<MechanicalWatch&>(watch);
	out << std::setw(25) << std::left;
	out << watch.footprint;
	return out;
}
