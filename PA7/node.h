/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: node.h								 *
												 *
*///**********************************************


#include "header.h"
//using namespace std;

template <class T>
class Node
{

public:
	
	Node<T>();
	Node<T>(T& newData);
	~Node();

	Node<T>* getpNext() const;
	T& getData() const;

	void setpNext(Node<T>* peepee);
	void setData(T& poopoo);

private:

	T mData;
	Node<T>* pNext;
};
