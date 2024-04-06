#pragma once


class Person
{
protected:
	int id;
	std::string name;
	std::string password;

public:
	virtual void login(int id, std::string password) = 0;
};

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
	double getbalance() {}
	void setbalance() {}
};

class Employee :
	public Person
{

private:

	

public:

	void login(int id, std::string password)override {}

	void addClient(Client client) {}

	Client searchClient(int id) {}

	void editClientInfo(std::string name, std::string password) {}
	void editClientInfo(std::string name) {}

	void displayClientInfo() {}

};

class Admin :
	public Employee
{

	double salary;

public:

	void login(int id, std::string password)override {}

	void addEmployee(Employee employee) {}

	Employee searchEmployee(int id) {}

	void editEmployee(int id, std::string password) {}
	void editEmployee(int id) {}
	void editEmployee(std::string password) {}


	void listEmployees() {}
};


