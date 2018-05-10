#pragma once
#include "stdafx.h"
#include <string>

using namespace std; 

class Ship {
private: 
	string name; 
	string year; 

public:
	Ship(string, string); 

	void setName(string); 
	void setYear(string); 

	string getName(); 
	string getYear(); 

	virtual void print(); //declared virtual so that it's required for the derived classes to make their own definition 
};
