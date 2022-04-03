#include <iostream>
#include <algorithm>

using namespace std;

void binary_search(int number_of_array_elements, int arr[], int key)
{
	int flag = 0;
	int l_elem = 0;
	int r_elem = number_of_array_elements - 1;
	int mid_elem ;
	while ((l_elem <= r_elem) && (flag == 0))
	{
		mid_elem = (l_elem + r_elem) / 2;
		if (key < arr[mid_elem]) {
			r_elem = mid_elem - 1;
		}
		else if (key > arr[mid_elem]) {
			l_elem = mid_elem + 1;
		}
		else
		{
			cout << key << " element is in index array's " << mid_elem << endl;
			flag = 1;
		}
	}
	if (flag == 0) { cout << "not found !"; }
	
}
int main()
{
	int key;
	int arr[100], number_of_array_elements;
	cout << "Enter number of array elements! :" << endl;
	cin >> number_of_array_elements;

	srand(time(0));
	for (int i = 0; i < number_of_array_elements; i++) {
		arr[i] = rand() % 100;
	}
	sort(arr, arr + number_of_array_elements);
	cout << "Random array : ";

	for (int i = 0; i < number_of_array_elements; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << "Enter key element! :" << endl;
	cin >> key;
	cout << endl;
	cout << "Searching " << key << endl;
	binary_search(number_of_array_elements, arr, key);

}