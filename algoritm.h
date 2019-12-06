#pragma once


#include "Deque.h"
#include "RangeException.h"
#include <string>

using namespace std;




template<class InputIterator, class T>
InputIterator my_find(InputIterator first, InputIterator last, const T& val)
{
	while (first != last) {
		if (*first == val) return first;
		++first;
	}
	return last;
}



template<class Type>
void operations(Deque<Type> dq)
{
	while (true) {
		cout << "1. push top" << endl;
		cout << "2. push back" << endl;
		cout << "3. pop top" << endl;
		cout << "4. pop back" << endl;
		cout << "5. top" << endl;
		cout << "6. back" << endl;
		cout << "7. clear" << endl;
		cout << "8. is empty" << endl;
		cout << "9. find" << endl;
		cout << "0. exit" << endl;
		Type T;
		int number = RangeException::inputInt(cin, 0, 9);
		switch (number)
		{
		case 1: {
			cin >> T;
			dq.pushTop(T);
			break;
		}
		case 2: {
			cin >> T;
			dq.pushBack(T);
			break;
		}
		case 3: {
			try {
				dq.popTop();
			}
			catch (std::exception &exp) {
				cout << exp.what() << endl;
			}
			break;
		}
		case 4: {
			try {
				dq.popBack();
			}
			catch (std::exception &exp) {
				cout << exp.what() << endl;
			}
		}
		case 5: {
			try {
				cout << dq.top() << endl;
			}
			catch (std::exception &exp) {
				cout << exp.what() << endl;
			}
			break;
		}
		case 6: {
			try {
				cout << dq.back() << endl;
			}
			catch (std::exception &exp) {
				cout << exp.what() << endl;
			}
			break;
		}
		case 7: {
			dq.clear();
			break;
		}
		case 8: {
			cout << dq.isEmpty() << endl;
			break;
		}
		case 9: {
			cin >> T;
			Deque<Type>::iterator it;
			it = my_find(dq.it_begin(), dq.it_end(), T);
			cout << (*it) << endl;
			break;
		}
		case 0: {
			return;
			break;
		}
		}


	}
}
