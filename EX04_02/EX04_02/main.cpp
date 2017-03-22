////////////////
//Kelsey Segren
//11.3 Increase Array Size
///////////////////

/*Once an array is created, its size is fixed. Occasionally, you need to add more values to an array, but the array is full.
In this case, you may create a new larger array to replace the existing array. Write a function with the following header:
int* doubleCapacity(const int*list, int size)*/

#include <iostream>
using namespace std;

int* doubleCapacity(const int * list, int size);

int main() {
	//asks for size of array
	int size, *list, *newlist;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << endl;

	list = new int[size];

	//user enters values in array
	cout << "Enter the values in the array: ";
	int values;
	for (int i = 0; i < size; i++) {
		cin >> values;
		*(list + i) = values;
	}

	//creates a larger array to replace existing array
	int doubleArray = size * 2;
	newlist = doubleCapacity(list, doubleArray);
	cout << "Enter the values into the new array: " << endl;
	for (int j = 0; j < doubleArray; j++) {
		cin >> values;
		*(newlist + j) = values;
	}

	//outputs new array
	cout << "The values in the new array are: ";
	for (int k = 0; k < doubleArray; k++) {
		cout << *(newlist + k) << " ";
	}

	cout << endl;

}

int *doubleCapacity(const int*list, int size) {
	int *p = new int[size];
	for (int i = 0; i < size; i++) {
		p[i] = list[i];
	}
	return p;
}