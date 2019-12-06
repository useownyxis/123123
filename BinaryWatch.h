#pragma once
#include "DigitalWatch.h"
class BinaryWatch :
	public DigitalWatch
{
private:
	int numberOfLuminodiodes;
public:
	BinaryWatch(std::string newProducer = "", std::string newName = "", int newCapacity = 0, int newNumberOfLuminodiodes = 0);
	virtual ~BinaryWatch() = default;
	int getNumberOfLuminodiodes();
	void setNumberOfLuminodiodes(int newNumberOfLuminodiodes);
	friend std::istream& operator>>(std::istream& in, BinaryWatch& watch);
	friend std::ostream& operator<<(std::ostream& out, BinaryWatch& watch);
	static void headOfTable();
	bool operator == (const BinaryWatch &another);
};

