#pragma once
#include <iostream>
#include <iomanip>
class Watch
{
protected:
	std::string producer;
	std::string name;
public:
	Watch(std::string newProducer = "", std::string newName = "");
	virtual ~Watch() = default;
	std::string getName();
	std::string getProducer();
	void setName(std::string newName);
	void setProducer(std::string newProducer);
	friend std::istream& operator>>(std::istream &in, Watch &watch);
	friend std::ostream& operator<<(std::ostream& out, const Watch &watch);
	static void headOfTable();
	bool operator == (const Watch &another);
};

