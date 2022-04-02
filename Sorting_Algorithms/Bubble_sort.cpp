#include <iostream>
using namespace std;

int bubble_sort(int number_of_array_elements, int arr[])
{
	int tmp = 0;
	for (int i = 0; i < number_of_array_elements; i++) {
		for (int j = number_of_array_elements - 1; j >= i + 1 ; j--) {
			if ( arr [j] < arr[j - 1]) {
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			}
		}
	}
	return arr[10];
}
int main()
{
	int arr[1000], number_of_array_elements;
	cout << "Enter number of array elements! :" << endl;
	cin >> number_of_array_elements;
	
	srand(time(0));
	for (int i = 0; i < number_of_array_elements; i++) {
		arr[i] = rand() % 100;
	}
	cout << "Unsorted random array : ";
	for (int i = 0; i < number_of_array_elements; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	bubble_sort(number_of_array_elements, arr);
	cout << "Sorted array : ";
	for (int i = 0; i < number_of_array_elements; i++) {
		cout << arr[i] << " ";
	}
}
