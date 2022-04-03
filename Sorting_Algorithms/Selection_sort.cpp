#include <iostream>
using namespace std;

int selection_sort(int number_of_array_elements, int arr[])
{
	int tmp;
	int j;
	for (int i = 0; i < number_of_array_elements; i++) {
		j = i;
		for (int k = i; k < number_of_array_elements; k++) {
			if (arr[k] < arr[j]) {
				j = k;
			}
		}
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
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
	selection_sort(number_of_array_elements, arr);
	cout << "Sorted array : ";
	for (int i = 0; i < number_of_array_elements; i++) {
		cout << arr[i] << " ";
	}
}