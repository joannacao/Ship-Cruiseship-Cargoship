#include "stdafx.h"
#include "CruiseShip.h"
#include <iostream>

CruiseShip::CruiseShip(int num, string n, string y):Ship(n, y)
{
	numPassengers = num; //stores int num into numPassengers variable, then calls the Ship constructor 
}

//mutators
void CruiseShip::setNumPassengers(int num)
{
	numPassengers = num; 
}

//accessors
int CruiseShip::getNumPassengers()
{
	return numPassengers;
}

//overriding Ship's print() 
void CruiseShip::print()
{
	cout << "Ship name: " << getName() << endl; 
	cout << "Max num of passengers: " << numPassengers << endl; 
}
