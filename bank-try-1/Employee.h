#pragma once
#include "Person.h"
#include "Client.h"



class Employee :
    public Person
{

private:

	double salary;

public:

	void login(int id, std::string password)override {}

	void addClient(Client client) {}

	Client searchClient(int id) {}

	void editClientInfo(std::string name, std::string password) {}
	void editClientInfo(std::string name) {}

	void displayClientInfo() {}

};

