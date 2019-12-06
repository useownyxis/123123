#pragma once
#include "Watch.h"
class DigitalWatch :
	public Watch
{
protected:
	int batteryCapacity;
public:
	DigitalWatch(std::string newName = "", std::string newProducer = "", int newCapaciry = 0);
	virtual ~DigitalWatch() = default;
	int getBatteryCapacity();
	void setBatteryCapacity(int newCapacity);
	friend std::istream& operator>>(std::istream& in, DigitalWatch &watch);
	friend std::ostream& operator<<(std::ostream& out, DigitalWatch& watch);
	static void headOfTable();
	bool operator == (DigitalWatch &another);
};

