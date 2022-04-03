#include <iostream>
using namespace std;

void linear_search(int number_of_array_elements, int arr[], int key)
{
	int find_key_element = 0;
	for (int j = 1; j < number_of_array_elements; j++) {
		if (key == arr[j]) {
			cout << key << " element in index - " << j << endl;
			find_key_element++;
		}
	}
	if (find_key_element == 0) {
		cout << "Element didn't found! " << endl;
	}
}
int main()
{
	int key;
	int arr[1000], number_of_array_elements;
	cout << "Enter number of array elements! :" << endl;
	cin >> number_of_array_elements;

	srand(time(0));
	for (int i = 0; i < number_of_array_elements; i++) {
		arr[i] = rand() % 100;
	}
	cout << "Random array : ";
	for (int i = 0; i < number_of_array_elements; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Enter key element! : ";
	cin >> key;
	linear_search(number_of_array_elements, arr, key);
}