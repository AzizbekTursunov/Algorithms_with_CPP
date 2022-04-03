#include <iostream>
using namespace std;

int insertion_sort(int number_of_array_elements, int arr[])
{
	int key = 0;
	int i = 0;
	for (int j = 1; j < number_of_array_elements; j++) {
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > key) { 
			arr[i + 1] = arr[i];
			i = i - 1;
			arr[i + 1] = key;
		}
	}
	return 0;
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
	insertion_sort(number_of_array_elements, arr);
	cout << "Sorted array : ";
	for (int i = 0; i < number_of_array_elements; i++) {
		cout << arr[i] << " ";
	}
}