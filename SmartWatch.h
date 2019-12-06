#pragma once
#include "DigitalWatch.h"
class SmartWatch :
	public DigitalWatch
{
private:
	int displaySize;
public:
	SmartWatch(std::string newProducer = "", std::string newName = "", int newCapacity = 0, int newDisplaySize = 0);
	virtual ~SmartWatch() = default;
	int getDisplaySize();
	void setDisplaySize(int newDisplaySize);
	friend std::istream& operator>>(std::istream& in, SmartWatch& watch);
	friend std::ostream& operator<<(std::ostream& out, SmartWatch& watch);
	static void headOfTable();
	bool operator == (SmartWatch &another);
};

