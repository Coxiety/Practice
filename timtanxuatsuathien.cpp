#include <iostream>

using namespace std;

void xuLy(int arr[100], int arr2[100], int n, int &arrMax) {
	arrMax = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] > arrMax) {
			arrMax = arr[i];
		}
	}
	for (int i = 0; i <= arrMax; ++i) {
		arr2[i] = 0;
	}
	for (int i = 0; i < n; ++i) {
		arr2[arr[i]] += 1;
	}
}

int main() {
	int arr[100];
	int arr2[100];
	int arrMax = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	xuLy(arr, arr2, n, arrMax);
	for (int i = 0; i <= arrMax; ++i) {
		if (arr2[i] > 0) {
			cout << i << " - " << arr2[i] << "; ";
		}
	}
	
	return 0;
}