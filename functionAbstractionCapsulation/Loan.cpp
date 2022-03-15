#include "Loan.h"
#include <cmath>
using namespace std;

Loan::Loan() {//�μ����� ������ -> Loan��ü ����
	annualInterestRate = 9.5;
	numberOfYears = 30;
	loanAmount = 100000;
}

Loan::Loan(double rate, int years, double amount) { //������ -> ������ �ʵ带 �ʱ�ȭ
	annualInterestRate = rate;
	numberOfYears = years;
	loanAmount = amount;
}

//������ �Լ�
double Loan::getAnnualInterestRate() {
	return annualInterestRate;
}

int Loan::getNumberOfYears() {
	return numberOfYears;
}

double Loan::getLoanAmount() {
	return loanAmount;
}

//������ �Լ�
void Loan::setAnnualInterestRate(double rate) {
	annualInterestRate = rate;
}

void Loan::setNumberOfYears(int years) {
	numberOfYears = years;
}

void Loan::setLoanAmount(double amount) {
	loanAmount = amount;
}

//�� ���Ա� ���ϴ� �Լ�
double Loan::getMonthlyPayment() {
	double monthlyInterestRate = annualInterestRate / 1200;
	return loanAmount * monthlyInterestRate / (1 - (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
}

//�� ���Ա� ���ϴ� �Լ�
double Loan::getTotalPayment() {
	return getMonthlyPayment() * numberOfYears * 12;
}