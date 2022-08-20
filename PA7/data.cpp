/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: Node.cpp								 *
												 *
*///**********************************************


#include "data.h"

Data::Data(){	}
Data::~Data(){	}

int Data::getNumAbs()
{
	return numAbs;
}

int Data::getRecNum()
{
	return recordNumber;
}

int Data::getID()
{
	return IDnumber;
}

string Data::getName()
{
	return name;
}

string Data::getEmail()
{
	return email;
}

int Data::getUnits()
{
	return units;
}

string Data::getProgram()
{
	return program;
}

string Data::getLevel()
{
	return level;
}

void Data::setNumAbs(int nNewAbs)
{
	numAbs = nNewAbs;
}

Data::Data(int rNumber, int idNumber, string dname, string dEmail, int dunits, string dprogram, string dlevel)
{
	recordNumber = rNumber;
	IDnumber = idNumber;
	name = dname;
	email = dEmail;
	units = dunits;
	program = dprogram;
	level = dlevel;
}

Data::Data(Data& copy)
{
	recordNumber = copy.getRecNum();
	IDnumber = copy.getID();
	name = copy.getName();
	email = copy.getEmail();
	units = copy.getUnits();
	program = copy.getProgram();
	level = copy.getLevel();
}


fstream& operator<<(fstream& lhs, Data& rhs)
{
	lhs << rhs.getRecNum() << "," << rhs.getID() << "," <<
		rhs.getName() << "," << rhs.getEmail() << "," <<
		rhs.getUnits() << "," << rhs.getProgram() << "," <<
		rhs.getLevel() << "," << rhs.getNumAbs() << endl;

	return lhs;
}
