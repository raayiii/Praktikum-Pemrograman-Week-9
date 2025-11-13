#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void sort(int data[], int s){
	for (int i = 0; i < s - 1; i++) {
		for (int j = s - 1; j > i; j--) {
			if (data[j] < data[j - 1]) {
			swap(data[j], data[j - 1]);
			}
		}
		cout << data[i];
	}
}

int array(){
	int N;
	int arr[N];
	cout << "Masukkan ukuran array: " << endl;
	cin >> N;

	cout << "Masukkan isi array: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	} 
	
	cout << "Isi array: " << endl;
	for (int i = 0; i < N; i++) {
	cout << arr[i];
	if (i < (N-1)) cout << ", ";
	}
	
	cout << endl;
	
	cout << "Descending array: " << endl;
	for (int i = 0; i < N - 1; i++) {
		for (int j = N - 1; j > i; j--) {
			if (arr[j] > arr[j - 1]) {
			swap (arr[j], arr[j - 1]);
			}
		}
	}
	for (int i = 0; i < N; i++) {
	cout << arr[i];
	if (i < (N-1)) cout << ", ";
	}

}

int main (){
	array();
}
