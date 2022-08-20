/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: stack.h								 *
												 *
*///**********************************************


#include "header.h"

class Stack
{
public:
	Stack();
	~Stack();

	void pop();
	void push(string data);
	string peek();

	bool isEmpty();

private:

	string stackArr[MAX];
};