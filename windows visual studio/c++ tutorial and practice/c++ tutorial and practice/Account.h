#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
	std::string accountName;
	std::string getAccountName(); //only necessary to declare function like so if function will be defined outside of this class
	Account(std::string AName, int ANumber, double ABalance);
	int getAccountNumber();
	double getAccountBalance();
	void withdrawAmount(double *currentAB, double withdrawalAmount);
	void depositAmount(double& currentAB, double depositAmount);
	double& getBalanceReference();
	double * getBalancePointer();

private:
	int accountNumber;
	double accountBalance;
};

#endif //ACCOUNT_H