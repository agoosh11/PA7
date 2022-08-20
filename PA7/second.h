/*************************************************
	Name: Aayush Shrestha						 *
	ID: 011756637								 *
	CPTS 122									 *
	Programming Assignment: PA7					 *
												 *
	File: second.h								 *
												 *
*///**********************************************


#pragma once
#include "header.h"
#include "list.h"
#include "Data.h"


void readLine(fstream& fstr, int* record, int* ID, string* name, string* email, int* units, string* program,
	string* level);
void importCourseList(fstream& fstr, List<Data>* masterList);
void markAbs(List<Data>& masterList);
void generateReport(List<Data>& masterList);
void storeList(fstream& outfile, List<Data>& pList);

