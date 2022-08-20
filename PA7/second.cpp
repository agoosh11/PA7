/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: Node.cpp								 *
												 *
*///**********************************************


#include "second.h"



/***************************************************************
* Function:	readLine()										   *
* Description:   reads infor from outfile					   *
* Returns:													   *
															   *
***************************************************************/
template <class Data>
void readLine(fstream& fstr, int* record, int* ID, string* name, string* email, int* units, string* program,
	string* level)
{
	string temp;
	string temp2;
	string str;


	//order to read in -> record,ID,Name,Email,Units,Program,Level

	getline(fstr, temp, ',');
	*record = atoi(temp.c_str()); // c_str to convert to a C string
	
	getline(fstr, temp, ',');
	*ID = atoi(temp.c_str());

	//need to getline() twice for full name
	getline(fstr, temp, ','); 
	getline(fstr, temp2, ',');
	*name = temp + temp2;

	getline(fstr, *email, ',');

	getline(fstr, temp, ',');
	*units = atoi(temp.c_str());

	getline(fstr, *program, ',');

	getline(fstr, *level, '\n');
}




/***************************************************************
* Function:	importCourseList(fstr, masterList)				   *
* Description:	imports the list from fstream				   *
* Returns:													   *
															   *
***************************************************************/
template <class Data>
void importCourseList(fstream& fstr, List<Data>* masterList)
{
	string str;
	int record, id, units = 0;
	string name, email, program, level;
	int num = 10; // 10 people in the csv file

	

	for (int i = 0; i != num; i++)
	{

		getline(fstr, str, ','); // record
		getline(fstr, str, ','); // ID
		getline(fstr, str, ','); // Name
		getline(fstr, str, ','); // Email
		getline(fstr, str, ','); // Units
		getline(fstr, str, ','); // Program
		getline(fstr, str, '\n');// Level

		readLine(fstr, &record, &id, &name, &email, &units, &program, &level);
		Data ndata(record, id, name, email, units, program, level);
		masterList->insert(ndata);
	}
}




/***************************************************************
* Function:	markAbs(List<Data>& masterList)					   *
* Description:	marks a student absent						   *
* Returns:													   *
															   *
***************************************************************/
template <class Data>
void markAbs(List<Data>& masterList)
{
	int opt = 0;
	int curAbs = 0;
	Node<Data>* curPtr = masterList.getHeadptr();

	while (curPtr->getpNext() != nullptr)
	{
		system("cls");
		cout << curPtr->getData().getName() << " : " << curPtr->getData().getID() << endl;
		cout << "Select one\n\t1. absent\n\t2. present" << endl;
		cin >> opt;

		if (opt == 1)
		{
			//is absent
			curAbs = curPtr->getData().getNumAbs();
			curPtr->getData().setNumAbs(curAbs + 1); // increasing the number of days student is absent

			// andy's code
			time_t t = time(0);   // get time now
			struct tm* now = localtime(&t);
			cout << (now->tm_year + 1900) << '-'
				<< (now->tm_mon + 1) << '-'
				<< now->tm_mday
				<< endl;

			cout << "Student " << curPtr->getData().getID() << " has been marked absent" << endl;
		}
		else if (opt == 2)
		{
			cout << "Student " << curPtr->getData().getID() << " has been marked present" << endl;
		}

		curPtr = curPtr->getpNext();
	}
	
}




/***************************************************************
* Function:	generateReport(List<Data>& masterList)			   *
* Description: generates either all list or filtered list	   *
* Returns:													   *
															   *
***************************************************************/
template <class Data>
void generateReport(List<Data>& masterList)
{
	int opt = 0, cusAbs = 0;
	Node<Data>* curPtr = masterList.getHeadptr();

	cout << "1. Generate report for all students\n2. Generate custom report for students" << endl;
	
	if (opt == 1)
	{
		while (curPtr->getpNext() != nullptr)
		{
			cout << curPtr->getData().getName() << " has " << curPtr->getData().getNumAbs() <<
				"absences" << endl;
			
			curPtr = curPtr->getpNext();
		}
	}
	else if (opt == 2)
	{
		cout << "Enter num of max absence you want to filter by" << endl;
		cin >> cusAbs;
		while (curPtr->getpNext() != nullptr)
		{
			if (curPtr->getData().getNumAbs() > cusAbs)
			{
				cout << curPtr->getData().getName() << " has " << curPtr->getData().getNumAbs() <<
					"absences" << endl;
			}

			curPtr = curPtr->getpNext();
		}

	}
}




/***************************************************************
* Function:	storeList(List<Data>* pList)					   *
* Description:	stores list into master.csv					   *
* Returns:													   *
															   *
***************************************************************/
template <class Data>
void storeList(fstream outfile, List<Data>* pList)
{
	Node<Data> temp = pList.getHeadptr();

	while (temp != nullptr)
	{
		
		outfile << temp->getData().getRecNum() << "," << temp->getData().getID() << ", \"" <<
			temp->getData().getName() << "\"," << temp->getData().getEmail() << "," <<
			temp->getData().getUnits() << "," << temp->getData().getProgram() << "," <<
			temp->getData().getLevel() << endl;

		temp = temp->getpNext();
	}

}

