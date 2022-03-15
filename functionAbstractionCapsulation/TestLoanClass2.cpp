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
	cout << a.loan.getLoanAmount() << endl; //Loan.cpp파일 참고하면 값 예측 가능
	cout << a.i << endl;

	return 0;
}
