#include "Loan.h"
#include <cmath>
using namespace std;

Loan::Loan() {//인수없는 생성자 -> Loan객체 생성
	annualInterestRate = 9.5;
	numberOfYears = 30;
	loanAmount = 100000;
}

Loan::Loan(double rate, int years, double amount) { //생성자 -> 데이터 필드를 초기화
	annualInterestRate = rate;
	numberOfYears = years;
	loanAmount = amount;
}

//접근자 함수
double Loan::getAnnualInterestRate() {
	return annualInterestRate;
}

int Loan::getNumberOfYears() {
	return numberOfYears;
}

double Loan::getLoanAmount() {
	return loanAmount;
}

//변경자 함수
void Loan::setAnnualInterestRate(double rate) {
	annualInterestRate = rate;
}

void Loan::setNumberOfYears(int years) {
	numberOfYears = years;
}

void Loan::setLoanAmount(double amount) {
	loanAmount = amount;
}

//월 납입금 구하는 함수
double Loan::getMonthlyPayment() {
	double monthlyInterestRate = annualInterestRate / 1200;
	return loanAmount * monthlyInterestRate / (1 - (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
}

//총 납입금 구하는 함수
double Loan::getTotalPayment() {
	return getMonthlyPayment() * numberOfYears * 12;
}