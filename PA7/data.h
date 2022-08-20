/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: data.h								 *
												 *
*///**********************************************

#include "stack.h"
using std::string;
class Data
{
public:

	Data();
	Data(int rNumber, int idNumber, string dname, string dEmail, int dunits, string dprogram, string dlevel);
	Data(Data& copy);
	~Data();


	int getNumAbs();
	int getRecNum();
	int getID();
	string getName();
	string getEmail();
	int getUnits();
	string getProgram();
	string getLevel();

	void setNumAbs(int nNewAbs);

private:
	
	int numAbs; // number of absences 
	int recordNumber;
	int IDnumber;
	string name;
	string email;
	int units;
	string program;
	string level;
	Stack dateAbs; // date of absence

};

fstream& operator<<(fstream& lhs, Data& rhs);
