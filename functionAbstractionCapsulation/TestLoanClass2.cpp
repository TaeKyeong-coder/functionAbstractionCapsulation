#include <iostream>
#include "Loan.h"
using namespace std;

class A {
public:
	Loan loan;
	int i;
};

int main() {
	A a;
	cout << a.loan.getLoanAmount() << endl; //Loan.cpp파일을 보면 알 수 있음.
	cout << a.i << endl;

	return 0;
}