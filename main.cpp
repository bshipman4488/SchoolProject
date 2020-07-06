#include <iostream>
#include <ios>
#include <iomanip>
#include <string>


#include "student.h"
#include "degree.h"
#include "roster.h"

using namespace std;







int main()
{

	Roster* roster1 = new Roster(numStudents);
	cout<< "Parsing all data and adding students to the roster: ";
	for (int i = 0; i < numStudents; i++){
		roster1->parseAdd(studentData[i]);
	};


	cout << "Done.\n";
	cout << "This is your roster: \n";
	roster1->print_All();

	//call Remove
	roster1->remove("A3");


}

