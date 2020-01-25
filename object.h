#ifndef OBJECT_H
#define OBJECT_H
#pragma once
#include <string>

/**
* A class to represent objects.
* Author: lesliexie
* THIS REMAINS INCOMPLETE
*/

class Object{
public:

	//Returns a character array (string) of this Object
	char* toString();

	//Prints out the name of this Object to stdout
	void print();

	//Returns the size of this Object in bytes
	int size();

	//Makes a deep copy of another Object
	Object& copy(Object);

private:
	
};

#endif