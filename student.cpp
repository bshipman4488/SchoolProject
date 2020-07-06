/*
 * student.cpp
 *
 *  Created on: May 31, 2020
 *      Author: bryantshipman
 */

#include <string>
#include <iostream>
#include <iomanip>
#include <ios>


#include "student.h"

using std::string;
using std::cout;
using std::left;
using std::setw;
using std::endl;



//Default empty Constructor
Student::Student(){
	this->studentID = "";
}
	//Full Constructor
Student::Student(string studentID){
	this->studentID = studentID;

}

	//getters
string Student::getStudentID(){
	return studentID;
}

	//Setters
void Student::setStudentID(string studentID){
	this->studentID = studentID;

}
	//Member function print()
void Student::print(){
	cout << left << setw(5) << studentID << endl;

}
	//Destructor
Student::~Student()
{
	}

