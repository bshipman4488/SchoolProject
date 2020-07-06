/*
 * student.h
 *
 *  Created on: May 31, 2020
 *      Author: bryantshipman
 */
#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

using std::string;


class Student{
private:
	string studentID;
public:
	//Empty Constructor
	Student();

	//Full Constructor
	Student(string studentID);

	//Getters
	string getStudentID();

	//Setters
	void setStudentID(string studentID);

	//public print function
	void print();

	//Destructor
	~Student();

};

#endif /* STUDENT_H_ */
