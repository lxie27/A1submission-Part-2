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
	void push(Object*);
	
	void push(char*);

	//Returns the Object at end of the Queue
	Object* pop();

	char* pop();

	//Returns true if this Queue is empty, false otherwise
	bool isEmpty();

	//Deletes this Queue from memory
	void destroy();


private:

};

//Creates a Queue
Queue* create();