#include "stdafx.h"
#include "CargoShip.h"
#include <string>
#include <iostream> 

using namespace std; 

CargoShip::CargoShip(int cap, string n, string y):Ship(n, y)
{
	capacity = cap; //stores int cap in capacity variable, then calls the Ship constructor
}

//mutators
void CargoShip::setCapacity(int cap)
{
	capacity = cap;
}

//accessor
int CargoShip::getCapacity()
{
	return capacity; 
}

//overrides Ship's print() 
void CargoShip::print()
{
	cout << "Ship name: " << getName() << endl; 
	cout << "Ship capacity: " << capacity << endl; 
}
