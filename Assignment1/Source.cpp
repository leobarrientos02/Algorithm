#include <iostream>
#include <time.h>

using namespace std;

int MaxPairwiseProduct(int num2[],int size) {
	int result = 0;
	// Using loop to search the array for the two largest numbers
	// Outer loop
	for (int outer = 0; outer < size; outer++) {
		//Inner loop
		for (int inner = outer + 1; inner < size; inner++) {
			//Loops runs until the largest result is found
			if (((num2[outer])) * num2[inner] > result) {
				result = ((num2[inner])) * num2[outer];
			}
		}
	}
	return result;
}

int main() {
	// Variables
	int num1;        //Gets n amount 
	int num2[50];     // Creates Array
	int product = 0;   //Recieves the MaximumPairwiseProduct() result

	cout << "Enter integer: \n";
	cin >> num1;
	cout << "Enter " << num1 << " amount of integers(separated by spaces) and press ENTER:\n";
	
	// Loop to fill in array
	for (int i = 0; i < num1; ++i) {
		cin >> num2[i];
	}
	product = MaxPairwiseProduct(num2, num1);
	
	cout << "\n" << product << "\n";

	// Clock to test algorithm
	const clock_t bc = clock();
	for (int i = 0; i < 100000000; i++);
	cout << "\n" << float(clock() - bc) / CLOCKS_PER_SEC << "sec";
	return 0;

}