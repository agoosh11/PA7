
/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: main.cpp								 *
												 *
*///**********************************************

#include "second.h"

void pRun();

int main(void)
{
	pRun();


	return 0;
}




/***************************************************************
* Function:	pRun()											   *
* Description:	prints the menu and runs the code			   *
* Returns:													   *
															   *
***************************************************************/
template <class Data>
void pRun()
{
	fstream fstr;
	fstream fstr2;
	int i = 0;
	List<Data> masterList;

	cout << "1.\tImport course list\n2.\tLoad master list\n3.\tStore master list\n4.\tMark absences\n5.\tGenerate report\n7.\tExit" <<
		endl;
	cin >> i;

	switch (i)
	{
	case1:
		fstr.open("list.csv");
		importCourseList(fstr, &masterList);

		fstr.close;

	case2:
		fstr2.open("master.csv");

		importCourseList(fstr2, &masterList);

		fstr2.close();

	case 3:

		fstream outfile;
		outfile.open("master.csv");

		storeList(outfile, &masterList);

		outfile.close();


	case 4:
		markAbs(masterList);

	case 5:
		generateReport(masterList);
	}
}
