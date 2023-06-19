#include <iostream>

void mergeSortMerging(int arr[], int l, int m, int r) {
	int leftLength = m - l + 1;
	int rightLength = r - m;

	int* tempLeft = new int[leftLength];
	int* tempRight = new int[rightLength];

	for (int i = 0; i < leftLength; i++) {
		tempLeft[i] = arr[l + i];
	}
	for (int i = 0; i < rightLength; i++) {
		tempRight[i] = arr[m + 1 + i];
	}
	int i, j, k;
	for (i = 0, j = 0, k = l; k <= r; k++) {
		if ((i < leftLength) && ((j >= rightLength) || (tempLeft[i] <= tempRight[j]))) {
			arr[k] = tempLeft[i];
			i++;
		}
		else {
			arr[k] = tempRight[j];
			j++;
		}
	}

	delete[] tempLeft;
	delete[] tempRight;

}
void mergeSortRecursion(int arr[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;

		mergeSortRecursion(arr, l, m);
		mergeSortRecursion(arr, m + 1, r);

		mergeSortMerging(arr, l, m, r);
	}
}
void mergeSort(int arr[], int length) {
	mergeSortRecursion(arr, 0, length-1);
}



int main() {
	int arr[] = {8, 0, 9, 5, 1, 4, 2, 3, 7, 6};
	int len = sizeof(arr) / sizeof(int);

	std::cout << "Before Sorted : ";
	for (int i = 0; i < len; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	mergeSort(arr, len);

	std::cout << "After Sorted : ";
	for (int i = 0; i < len; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
