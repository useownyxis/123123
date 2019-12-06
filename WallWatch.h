#pragma once
#include "MechanicalWatch.h"
class WallWatch :
	public MechanicalWatch
{
private:
	int footprint;
public:
	WallWatch(std::string newProducer = "", std::string newName = "", std::string newMechanism = "", int newFootprint = 0);
	virtual ~WallWatch() = default;
	int getFootprint();
	void setFootpring(int newFootprint);
	friend std::istream& operator>>(std::istream& in, WallWatch& watch);
	friend std::ostream& operator<<(std::ostream& out, WallWatch& watch);
	static void headOfTable();
	bool operator == (const WallWatch &another);
};

