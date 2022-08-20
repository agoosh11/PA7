/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: list.h								 *
												 *
*///**********************************************


#pragma once

#include "node.h"

template <class T>
class List
{
public:
	List<T>();
	~List<T>();


	Node<T>* getHeadptr()const;

	void insert(T nData);
	void printTree();
	

private: 
	Node<T>* mpHead;
};