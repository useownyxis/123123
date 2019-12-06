#pragma once
#include "MechanicalWatch.h"
class WristWatch :
	public MechanicalWatch
{
private:
	int dialSize;
public:
	WristWatch(std::string newProducer = "", std::string newName = "", std::string newMechanism = "", int newDialSize = 0);
	virtual ~WristWatch() = default;
	int getDialSize();
	void setDialSize(int newDialSize);
	friend std::istream& operator>>(std::istream& in, WristWatch& watch);
	friend std::ostream& operator<<(std::ostream& out, WristWatch& watch);
	static void headOfTable();
	bool operator == (const WristWatch &another);
};

