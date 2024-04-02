#pragma once
#include<iostream>

class Person
{
protected:
	int id;
	std::string name;
	std::string password;

public:
	virtual void login(int id, std::string password) = 0;
};

