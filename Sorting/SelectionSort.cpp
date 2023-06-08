#include <iostream>

void selectionSort(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		int minArr = i;
		for (int j = i+1; j < len; j++) {
			if (arr[j] < arr[minArr]) {
				minArr = j;
			}
		}

		if (minArr != i) {
			int temp = arr[i];
			arr[i] = arr[minArr];
			arr[minArr] = temp;
		}

	}
}

int main() {
	int remi[] = {3,4,6,5,2};
	int len = sizeof(remi) / sizeof(int);

	std::cout << "Before sorting : ";

	for (int i = 0; i < len; i++) {
		std::cout << remi[i] << " ";
	}
	std::cout << std::endl;

	selectionSort(remi, len);

	std::cout << "After sorting : ";

	for (int i = 0; i < len; i++) {
		std::cout << remi[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
