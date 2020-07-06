/*
 * roster.h
 *
 *  Created on: May 31, 2020
 *      Author: bryantshipman
 */

#pragma once
#ifndef ROSTER_H_
#define ROSTER_H_
#pragma once

#include "student.h"

	//list of strings to pull from
const int numStudents = 5;
	string studentData[numStudents] = {
			"A1,",
			"A2,",
			"A3,",
			"A4,",
			"A5,",

	};



	//Roster Class
class Roster {
public:

	int lastIndex; //index of the last student in the roster
	int maxStudents; //maximum number of students
	//Empty Constructor
	Roster();
	//Constructor to set the size
	Roster(int maxStudents);
	Student** students; //array of pointers to students
	void print_All(); //print all of the students in the roster using the print function in each student object.
	void parseAdd(string datarow); //use this to parse the strings and create the student objects.
	bool remove(string studentID); //remove a Student by the student ID reference
	void printDaysAverage(string studentID); //prints the average days to complete courses based on studentID
	void printInvalidEmail(); //Find emails with invalid properties and print them
	//void printByDegreeType(DegreeType d);
	~Roster(); //Destroy this roster

	};


#endif /* ROSTER_H_ */
