#ifndef LOAN_H
#define LOAN_H

class Loan {
public:
	Loan(); //기본 대출 객체 생성
	Loan(double rate, int years, double amount); //특정 이율, 연수, 대출액이 포함된 대출 객체 생성
	double getAnnualInterestRate(); //대출의 연이율을 반환
	int getNumberOfYears(); //대출 연수를 반환
	double getLoanAmount(); //대출액 반환
	void setAnnualInterestRate(double rate); //새로운 대출의 연이율을 설정
	void setNumberOfYears(int years); //새로운 대출 연수를 설정
	void setLoanAmount(double amount); //새로운 대출액을 설정
	double getMonthlyPayment(); //대출의 월 납입금을 반환
	double getTotalPayment(); //대출의 총 납입금을 반환

private:
	double annualInterestRate; //대출의 연이율
	int numberOfYears; //대출 연수
	double loanAmount; //대출액
};
#endif