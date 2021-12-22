/*
 * Functor.cpp
 *
 *  Created on: 22-Dec-2021
 *      Author: Admin
 */

#include <iostream>

using namespace std;

class myFunctor {
public:
	myFunctor(int x): _x(x) {}
	int operator() (int y) {
		return _x+y;
	}
private:
	int _x;
};

int main() {

	myFunctor obj(10);
	cout << obj(20) << endl;
}
