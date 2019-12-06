#pragma once
#include "Watch.h"
class MechanicalWatch :
	public Watch
{
protected:
	std::string mechanismDesign;
public:
	MechanicalWatch(std::string newProducer = "", std::string newName = "", std::string newMechanism = "");
	virtual ~MechanicalWatch() = default;
	std::string getMechanismDesign();
	void setMechanismDesign(std::string newMechanism);
	friend std::istream& operator>>(std::istream& in, MechanicalWatch& watch);
	friend std::ostream& operator<<(std::ostream& out, MechanicalWatch& watch);
	static void headOfTable();
	bool operator == (const MechanicalWatch &another);
};

