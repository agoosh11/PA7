/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: Node.cpp								 *
												 *
*///**********************************************


#include "stack.h"

/***************************************************************
* Function:	Stack::Stack()									   *
* Description:	default constructor							   *
* Returns:													   *
															   *
***************************************************************/
Stack::Stack()
{
	// stack array size is 100
	int i = 0;
	while(i < 100)
	{
		stackArr[i] = '\0';
		i++;
	}
}

Stack::~Stack()
{
	//default destructor
}


/***************************************************************
* Function:	Stack::pop()									   *
* Description:	removes the top item in stack				   *
* Returns:													   *
															   *
***************************************************************/
void Stack::pop()
{
	int i = 0;
	while (stackArr[i] != "\0")
	{
		stackArr[i] = stackArr[i + 1];
	}
}


/***************************************************************
* Function:	Stack::push(string data)						   *
* Description: pushes an item at the top					   *
* Returns:													   *
															   *
***************************************************************/
void Stack::push(string data)
{
	string temp = data;
	int i = 0;

	for (; stackArr[i] != "\0"; i++);
	for (; i > 0; i--)
	{
		stackArr[i] = stackArr[i--];
	}

	i = 0;
	stackArr[i] = temp;


}


/***************************************************************
* Function:	Stack::peek()									   *
* Description:	lets user see the top item					   *
* Returns:													   *
															   *
***************************************************************/
string Stack::peek()
{
	return stackArr[0];
}

