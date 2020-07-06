/*
 * roster.cpp
 *
 *  Created on: May 31, 2020
 *      Author: bryantshipman
 */

#include <ios>
#include <string>
#include <iomanip>
#include <iostream>

#include "roster.h"

using namespace std;


Roster::Roster() {
	this->maxStudents = 0;
	this->lastIndex = -1;
	this->students = nullptr;

	};
Roster::Roster(int maxStudents){
	this->maxStudents = maxStudents;
	this->lastIndex = -1;
	this->students = new Student *[maxStudents];//Creates an array of pointers to the Students
	};
void Roster::parseAdd(string row){
	if(lastIndex < maxStudents){
		lastIndex++;
		//if statement to create students
		//need to see if I can do this using string compare
		if(row[0] == 'A'){
			this->students[lastIndex] = new Student();
		}
		//exit because the first character is wrong
		else {
			cerr << "Invalid Character!";
			exit(-1);
		}
		//Time to parse

		//find and set the student ID
		int rhs =studentData[lastIndex].find(",");
		students[lastIndex]->setStudentID(studentData[lastIndex].substr(0, rhs));

	}
	//exit for too many students
	else{
		cerr << "EXITING BECAUSE YOU HAVE TOO MANY STUDENTS";
		exit(-1);
	}
}
	//Print student roster
void Roster::print_All(){
	for (int i = 0; i <= this->lastIndex; i++) (this->students)[i]->print();

}
bool Roster::remove(string studentID){
	bool found = false;
	for (int i = 0; i <= lastIndex; i++){
		if (this->students[i]->getStudentID()==studentID){
			found = true;
			delete this->students[i];
			this->students[i] = this->students[lastIndex];
			lastIndex--;
		}
	}
	return found;
};

