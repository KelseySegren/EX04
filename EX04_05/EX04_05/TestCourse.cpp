////////////////
//Kelsey Segren
//11.13 The Course Class
///////////////


#include <iostream>
#include "Course.h"
using namespace std;

int main() {
	Course course1("Data Structures", 10);
	Course course2("Database Systems", 15);
	Course course3("Economics", 20); //adds a course

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");
	

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	//adds three students to course 3
	course3.addStudent("Kelsey Segren");
	course3.addStudent("Joe Brown");
	course3.addStudent("Haley Kim");

	cout << "Numbers of students in course 1: " << course1.getNumberOfStudents() << "\n";
	const string* students = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	cout << "\nNumber of students in course 2: " << course2.getNumberOfStudents() << "\n";
	students = course2.getStudents();
	for (int i = 0; i < course2.getNumberOfStudents(); i++)
		cout << students[i] << ", ";
	

	//displays students in this course
	course3.dropStudent("Kelsey Segren"); //removes a student from course 3
	cout << "\nNumber of students in course 3: " << course3.getNumberOfStudents() << "\n";
	students = course3.getStudents();
	for (int i = 0; i < course3.getNumberOfStudents(); i++) {
		cout << students[i] << ", ";
	}
	
	return 0;
}