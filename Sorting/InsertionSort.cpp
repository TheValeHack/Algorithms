#include <iostream>


void insertionSort(int arr[], int len) {
	for (int i = 1; i < len; i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			else {
				break;
			}
		}
	}
}

int main() {
	int test[] = { 4,9,7,1,8,3,5,5,10,8,6,3,2 };
	int len = sizeof(test) / sizeof(int);

	std::cout << "Before : ";
	for (int i = 0; i < len; i++) {
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	insertionSort(test, len);

	std::cout << "After : ";
	for (int i = 0; i < len; i++) {
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;

	
	std::cout << std::endl;

	return 0;
}
