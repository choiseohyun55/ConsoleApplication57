
#include <iostream>
using namespace std;
int main() {
	int arr[7] = { 1, 4, 3, 3, 5, 7, 6 };
	int* front = &arr[0];
	int* back = &arr[6];

	for (int i = 0; i < 3; i++) {
		int num = *(back - i);
		*(back - i) = *(front + i);
		*(front + i) = num;
	}
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
}

