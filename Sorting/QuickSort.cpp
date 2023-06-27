#include <iostream>


void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[], int low, int high) {
	int pivotValue = arr[high];

	int j = low;

	for (int i = low; i < high; i++) {
		if (arr[i] <= pivotValue) {
			swap(&arr[i], &arr[j]);
			j++;
		}
	}
	swap(&arr[j], &arr[high]);

	return j;
}
void quickSort_recursion(int arr[], int low, int high) {
	if (low < high) {
		int pivotIndex = partition(arr, low, high);

		quickSort_recursion(arr, low, pivotIndex - 1);
		quickSort_recursion(arr, pivotIndex + 1, high);
	}
}
void quickSort(int arr[], int length) {
	quickSort_recursion(arr, 0, length - 1);
}


int main() {
	int arr[] = {8, 0, 1, 3, 12, 9, 2, 7, 11, 10, 4, 6, 5};
	int length = sizeof(arr)/sizeof(int);

	std::cout << "Before Sorting : ";
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;


	quickSort(arr, length);

	std::cout << "After Sorting  : ";
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}

