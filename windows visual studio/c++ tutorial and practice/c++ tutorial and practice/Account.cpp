#include "Account.h"
#include <string>

//constructor
Account::Account(std::string AName, int ANumber, double ABalance) {
	accountName = AName;
	accountNumber = ANumber;
	accountBalance = ABalance;
}


//public functions

//returns the account name
std::string Account::getAccountName() {
	return accountName;
}

//return the account number
int Account::getAccountNumber() {
	return accountNumber;
}

//return the account balance
double Account::getAccountBalance() {
	return accountBalance;
}

//subtract the given amount from the account
void Account::withdrawAmount(double *currentAB, double withdrawalAmount) {
	*currentAB -= withdrawalAmount;
}

//add the given amount to the account
void Account::depositAmount(double& currentAB, double depositAmount) {
	currentAB += depositAmount;
}

//returns the account balance variable as a reference
double& Account::getBalanceReference() {
	return accountBalance;
}

double * Account::getBalancePointer() {
	return &accountBalance;
}