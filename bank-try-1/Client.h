#pragma once
#include "Person.h"

class Client :
    public Person
{
private:
	double balance;

public:

	void login(int id, std::string password)override {}
	void deposit(int amount) {}
	void withdraw(int amount) {}
	int chcekBalance() {}
	void transferMoney(Client resever) {}
	double getbalance(){}
	void setbalance(){}
};

