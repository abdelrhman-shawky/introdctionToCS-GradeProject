#pragma once
#include "Employee.h"
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

