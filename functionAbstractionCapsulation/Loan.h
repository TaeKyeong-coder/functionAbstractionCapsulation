#ifndef LOAN_H
#define LOAN_H

class Loan {
public:
	Loan(); //�⺻ ���� ��ü ����
	Loan(double rate, int years, double amount); //Ư�� ����, ����, ������� ���Ե� ���� ��ü ����
	double getAnnualInterestRate(); //������ �������� ��ȯ
	int getNumberOfYears(); //���� ������ ��ȯ
	double getLoanAmount(); //����� ��ȯ
	void setAnnualInterestRate(double rate); //���ο� ������ �������� ����
	void setNumberOfYears(int years); //���ο� ���� ������ ����
	void setLoanAmount(double amount); //���ο� ������� ����
	double getMonthlyPayment(); //������ �� ���Ա��� ��ȯ
	double getTotalPayment(); //������ �� ���Ա��� ��ȯ

private:
	double annualInterestRate; //������ ������
	int numberOfYears; //���� ����
	double loanAmount; //�����
};
#endif