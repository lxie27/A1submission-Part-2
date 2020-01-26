#pragma once
#include <string>
#include "object.h"
/**
* A class to represent Queues.
* Author: lesliexie
* THIS REMAINS INCOMPLETE
*/

class Queue {
public:

	//Pushes an Object onto the Queue
	virtual void push(Object*);
	
	//Returns the Object at end of the Queue
	Object* pop();

	//Returns true if this Queue is empty, false otherwise
	virtual bool isEmpty();

	//Deletes this Queue from memory
	virtual ~Queue();
};
