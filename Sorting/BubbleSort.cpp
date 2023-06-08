#include <iostream>

void bubbleSort(char arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1; j++) {
			if ((int)arr[j] > (int)arr[j + 1]) {
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	char tes[] = "gbdhefaic";

	for (int i = 0; i < 9; i++)
	{
		std::cout << tes[i] << " ";
	}
	std::cout << std::endl;

	bubbleSort(tes, 9);

	for (int i = 0; i < 9; i++)
	{
		std::cout << tes[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
