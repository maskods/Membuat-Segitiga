#include <iostream>
using namespace std;

int main() {
	// Membuat segitiga siku-siku menggunakan looping
	// Membuat Variabel
	int n;
	
	// Title
	cout << "====+ Membuat Segitiga Siku-Siku +====" << endl << endl;
	
	// Masukkan nilai n
	cout << "Masukkan panjang sisi  : ";
	cin >> n;
	
	// Looping Pola 1
	cout << "Pola 1" << endl; 
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cout << " * ";
		}
		cout << endl;
	}
	cout << endl;
	
	// Looping Pola 2
	cout << "Pola 2" << endl;
	for(int i = 1; i <= n; i++) {
		for(int j = n; j >= i; j--) {
			cout << " * ";
		}	
		cout << endl;
	}
	cout << endl;
	
	// Looping Pola 3
	cout << "Pola 3" << endl;
	for(int i = 1; i <= n; i++) {
		for(int j = n; j > i; j--) {
			cout << "   ";
		}
		for(int k = 1; k <= i; k++) {
			cout << " * ";
		}
		cout << endl;
	}
	cout << endl;
	
	// Looping Pola 4
	cout << "Looping Pola 4" << endl;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j < i; j++) {
			cout << "   ";
		}
		for(int k = n; k >= i; k--) {
			cout << " * ";
		}
		cout << endl;
	}

	
	return 0;
}
