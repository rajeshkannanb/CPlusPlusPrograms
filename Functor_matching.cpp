/*
 * Functor.cpp
 *
 *  Created on: 22-Dec-2021
 *      Author: Admin
 */

/*
 * Functor: Object to functions. The template definition gives a generic implementation. typename keyword is used to define
 * the type. It could be a function or object to function. In our example, the type is functor (object to function).
 */

#include <iostream>
#include <vector>

using namespace std;

class myFunctor {
public:
	myFunctor(){}
	int operator() (int x) {
	   return x > 10;
	}
};

template <typename funcType>
vector<int> findMatchingNumbers(vector<int> IncomingVec, funcType comparisonFunction){
	vector<int> returnVec;
	vector<int>::iterator itr = IncomingVec.begin(), end = IncomingVec.end();
	while(itr != end) {
		if(comparisonFunction(*itr)) {
				returnVec.push_back(*itr);
		}
		++itr;
	}

	return returnVec;
}

int main() {
	vector<int> inputVec;
	inputVec.push_back(10);
	inputVec.push_back(20);
	inputVec.push_back(39);

	vector<int> outputVec;
	myFunctor obj;
	outputVec = findMatchingNumbers(inputVec, obj);

	vector<int>::iterator itr = outputVec.begin(), end=outputVec.end();
	while(itr != end) {
		cout << *itr << endl;
		++itr;
	}
}
