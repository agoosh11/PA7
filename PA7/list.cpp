/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: Node.cpp								 *
												 *
*///**********************************************


#include "list.h"


template<class T>
List<T>::List<T>()
{
	mpHead = nullptr;
}


template <class T>
Node<T>* List<T>::getHeadptr()const
{
	return mpHead;
}



/***************************************************************
* Function:	List<T>::insert(T nData)						   *
* Description:	inserts a data node to list					   *
* Returns:													   *
															   *
***************************************************************/
template <class T>
void List<T>::insert(T nData)
{
	Node<T>* temp = new Node<T>(nData);
	if (temp == nullptr)
	{
		break;
	}
	else if (temp != nullptr)
	{
		temp->setpNext(mpHead);
		mpHead = temp;
	}
}



/***************************************************************
* Function:	printTree()										   *
* Description: prints the list								   *
* Returns:													   *
															   *
***************************************************************/
template <class T>
void List<T>::printTree()
{
	Node<T>* curptr = mpHead;

	if (mpHead == nullptr)
	{
		break;
	}
	else if (mpHead != nullptr)
	{
		while (curptr != nullptr)
		{
			cout << curptr->getData() << endl;
			curptr = curptr->getpNext();
		}
	}
}