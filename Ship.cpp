#include "stdafx.h"
#include "Ship.h"
#include <string>
#include <iostream> 

using namespace std; 

Ship::Ship(string n, string y) //constructor
{
	name = n; //stores string n into name variable
	year = y; //stores string y into year variable
}

//mutators
void Ship::setName(string n)
{
	name = n; 
}

void Ship::setYear(string y)
{
	year = y; 
}

//accessors
string Ship::getName()
{
	return name;
}

string Ship::getYear()
{
	return year;
}

void Ship::print()
{
	cout << "Ship name: " << name << endl; //prints name
	cout << "Year built: " << year << endl; //prints year
}
