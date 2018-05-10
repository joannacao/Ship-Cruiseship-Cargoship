#pragma once
#include "stdafx.h"
#include <string>
#include "Ship.h"

using namespace std; 

class CruiseShip : public Ship {
private:
	int numPassengers; 

public: 
	CruiseShip(int num, string n, string y);

	void setNumPassengers(int); 
	
	int getNumPassengers(); 

	void print(); 
};
