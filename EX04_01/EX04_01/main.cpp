/////////////
//Kelsey Segren
//11.1 Analyze Output
/////////////

//Write a program that first reads an integer for the array size, then reads numbers into the array, computes their average,
//and finds out how many numbers are about the average

#include <iostream>
using namespace std;

int main() {
	//reads in size of array
	int sizeOfArray = 0;
	cout << "Enter size of array: ";
	cin >> sizeOfArray;

	int * numbers = new int[sizeOfArray];
	cout << "Enter " << sizeOfArray << " numbers into the array: " << endl;
	

	//user enters numbers in array
	for (int i = 0; i < sizeOfArray; i++) {
		cin >> numbers[i];
	}

	//computes average
	double average;
	double sum = 0;
	for (int j = 0; j < sizeOfArray; j++) {
		sum += numbers[j];
	}
	average = sum / sizeOfArray;
	cout << "The average of these numbers is: " << average << endl;

	//computes numbers above average
	double aboveAvg = 0;
	for (int k = 0; k < sizeOfArray; k++) {
		if (numbers[k] > average) {
			aboveAvg++;
		}
	}
	cout << "There are " << aboveAvg << " numbers are above the average." << endl;


}