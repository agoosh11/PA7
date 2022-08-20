/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: Node.cpp								 *
												 *
*///**********************************************


#include "node.h"

template <class T>
Node<T>::Node<T>(T& newData)
{
	T temp = newData;
	mData = temp;
	pNext = nullptr;
}

template <class T>
Node<T>* Node<T>::getpNext()const
{
	return pNext;
}

template <class T>
T& Node<T>::getData()const
{
	return mData;
}

template <class T>
void Node<T>:: setpNext(Node<T>*peepee)
{
	pNext = peepee;
}

template <class T>
void Node<T>::setData(T&poopoo)
{
	mData = poopoo;
}


