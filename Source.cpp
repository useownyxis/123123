#include <iostream>

#include "Deque.h"
#include "RangeException.h"
#include "algoritm.h"

#include "Watch.h"
#include "BinaryWatch.h"
#include "DigitalWatch.h"
#include "MechanicalWatch.h"
#include "SmartWatch.h"
#include "WallWatch.h"
#include "WristWatch.h"



using namespace std;

int main()
{
	cout << "Input type" << endl;
	cout << "1. int" << endl;
	cout << "2. char" << endl;
	cout << "3. double" << endl;
	cout << "4. string" << endl;
	cout << "5. Watch" << endl;
	cout << "6. Digital Watch" << endl;
	cout << "7. Mechanical Watch" << endl;
	cout << "8. Smart Watch" << endl;
	cout << "9. Binary Watch" << endl;
	cout << "10. Wrist Watch" << endl;
	cout << "11. Wall Watch" << endl;
	cout << "0. exit" << endl;
	int number = RangeException::inputInt(cin, 0, 11);
	switch (number)
	{
	case 1: {
		Deque<int> DQ;
		operations(DQ);
		break;
	}
	case 2: {
		Deque <char> DQ;
		operations(DQ);
		break;
	}
	case 3: {
		Deque <double> DQ;
		operations(DQ);
		break;
	}
	case 4: {
		Deque <string> DQ;
		operations(DQ);
		break;
	}
	case 5: {
		Deque <Watch> DQ;
		operations(DQ);
		break;
	}
	case 6: {
		Deque <DigitalWatch> DQ;
		operations(DQ);
		break;
	}
	case 7: {
		Deque <MechanicalWatch> DQ;
		operations(DQ);
		break;
	}
	case 8: {
		Deque <SmartWatch> DQ;
		operations(DQ);
		break;
	}
	case 9: {
		Deque <BinaryWatch> DQ;
		operations(DQ);
		break;
	}
	case 10: {
		Deque <WristWatch> DQ;
		operations(DQ);
		break;
	}
	case 11: {
		Deque <WallWatch> DQ;
		operations(DQ);
		break;
	}
	case 0: {
		return 0;
		break;
	}
	}
}