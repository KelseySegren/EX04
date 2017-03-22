
#ifndef COURSE_H_
#define COURSE_H_
#include <string>
using namespace std;
class Course
{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
public:
	Course(const string& courseName, int capacity);
	~Course();
	const string getCourseName();
	void addStudent(const string& name);
	void dropStudent(const string& name);
	const string* getStudents();
	const int getNumberOfStudents();
	void clear(Course& courseName);
	void reallocateStudentArray();
	Course(const Course& c);
};
#endif

