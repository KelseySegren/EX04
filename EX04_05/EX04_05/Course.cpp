#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course() {
	delete[] students;
}

const string Course::getCourseName() {
	return courseName;
}

void Course::addStudent(const string &name) {
	students[numberOfStudents] = name;
	numberOfStudents++;
}

//Implement the dropStudent function
void Course::dropStudent(const string& name)
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name)
			for (int j = i; j < numberOfStudents; j++)
			{
				students[i] = students[j + 1];
			}
		numberOfStudents--;
	}
}

const string* Course::getStudents() {
	return students;
}

const int Course::getNumberOfStudents() {
	return numberOfStudents;
}

//add a new function named clear() that removes all students from the course
void Course::clear(Course& courseName) {
	courseName.students = 0;
	courseName.numberOfStudents = 0;
}

//When adding a new student to the course, if the array capacity is exceeded, increase the array size by creating a new larger array
//and copying the contents of the current array into it
Course::Course(const Course& c) {
	courseName = c.courseName;
	numberOfStudents = c.numberOfStudents;
	capacity = c.capacity;

	students = new string[capacity];
	for (int i = 0; i < numberOfStudents; i++)
	{
		students[i] = c.students[i];
	}
}

//Implement the destructor and copy constructor to perform a deep copy in the class
void Course::reallocateStudentArray() {
	int expand = capacity > 10;
	capacity / 2;
	capacity;

	string* newStudents = new string[capacity + expand];
	for (int i = 0; i < numberOfStudents; i++)
	{
		newStudents[i] = students[i];
	}
	capacity += expand;
	delete[] students;
	students = newStudents;

}


