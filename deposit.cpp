#include <iostream>
#include <string>
#include "deposit.h"

Deposit::Deposit()
{
	std::cout << "Default initilize" << std::endl;
	name = "Everyone";
	number = "12345";
	money = 0.0;
}

Deposit::Deposit(const std::string & owner, const std::string & account, double balance)
{
	name = owner;
	number = account;
	if (balance < 0)
	{
		std::cout << "Balance must be positive. " << name << " set to 0." << std::endl;
		money = 0.0;
	}
	else
		money = balance;
}

Deposit::~Deposit()
{
	std::cout << "Destruct!" << std::endl;
}

void Deposit::Add(double num)
{
	std::cout << "Add sum to account." << std::endl;
	money += num;
	std::cout << "Now " << name << " has a " << money << "$" << std::endl;
}

void Deposit::Delete(double num)
{
	std::cout << "Decrease balance." << std::endl;
	if (num > money)
	{
		std::cout << "Insufficient funds in the account. Gde den'gi Lebowski??" << std::endl;
	}
	else
		money -= num;
}

void Deposit::Show() const
{
	std::cout << "Account owner: " << name << std::endl;
	std::cout << "Account number: #" << number << std::endl;
	std::cout << "Balance: " << money << "$" << std::endl; 
}