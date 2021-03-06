// Ship_Cruise_Cargo.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip> 
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std; 


int main()
{
	const int NUM_SHIPS = 3; 
	Ship *shipList[NUM_SHIPS] = { //created an array of Ship, CruiseShip and CargoShip objects
		new Ship("Mother", "1967"), //dynamically allocated objects
		new CruiseShip(4000, "Royal Princess", "2004"), 
		new CargoShip(50, "John", "2000") };
	for (int count = 0; count < 3; count++) {
		Ship *ship = shipList[count]; //for each object in the list, call print()
		ship->print(); 
	}
	return 0;
}

