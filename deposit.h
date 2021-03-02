#ifndef DEPOSIT_H
#define DEPOSIT_H
#include <string>

class Deposit
{
private:
	std::string name;
	std::string number;
	double money;
public:
	Deposit();
	Deposit(const std::string & owner, const std::string & account, double balance = 0.0);
	~Deposit();
	void Add(double num);
	void Delete(double num);
	void Show() const;
};

#endif