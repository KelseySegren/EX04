///////////////
//Kelsey Segren
//11.5 Find the smallest element
///////////////

//Use pointers to write a function that finds the smallest element in an array of integers.
//Use {1,2,4,5,10,100,2,-22} to test the function

#include <iostream>
using namespace std;

int minValue(double *list, int size);

int main() {
	
	//asks for size of array
	double *list;
	int size;
	cout << "Enter size of array: ";
	cin >> size;

	list = new double[size];

	//user enters {1,2,4,5,10,100,2,-22} into array
	for (int i = 0; i<size; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> list[i];
	}

	//calls minValue function
	cout << "The minimum value is: " << minValue(list, size) << endl;


}

//minValue function definition
int minValue(double *list, int size) {

	double *minimum = list;
	for (int i = 0; i < size; i++) {
		if (*(list + i) < *minimum) //if previous array value is less than minimum, then it now becomes the minimum
		{
			minimum = list + i;

		}
		
	}
	return *minimum;
}