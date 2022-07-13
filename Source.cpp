#include <iostream>
using namespace std;
void SelectionSort(int a[], int& n);

int main() {
		
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	SelectionSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << " | " << a[i] << " | ";
	}
	delete[]a;
	return 0;
}
void SelectionSort(int a[], int& n) {

	for (int i = 0; i <= n - 2; i++) {
		int Smallest = i;
		for (int j = i + 1; j <= n - 1; j++) {

			if (a[j] < a[Smallest]) {
				Smallest = j;
			}
		}

		int t = a[Smallest];
		a[Smallest] = a[i];
		a[i] = t;

	}
	
}