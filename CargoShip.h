#pragma once
#include "stdafx.h"
#include "Ship.h"
#include <string>

using namespace std;

class CargoShip : public Ship {
private: 
	int capacity; 

public: 
	CargoShip(int cap, string n, string y); 

	void setCapacity(int); 

	int getCapacity(); 

	void print(); 
};
