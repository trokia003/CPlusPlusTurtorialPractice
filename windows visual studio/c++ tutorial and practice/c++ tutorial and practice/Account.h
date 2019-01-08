#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
	std::string accountName;
	std::string getAccountName(); //only necessary to declare function like so if function will be defined outside of this class
	Account(std::string AName, int ANumber, double ABalance);

private:
	int accountNumber;
	double accountBalance;
	int getAccountNumber();
	double getAccountBalance();
	void withdrawAmount(int *currentAB, double withdrawalAmount);
	void depositAmount(int& currentAB, double depositAmount);
};

#endif //ACCOUNT_H