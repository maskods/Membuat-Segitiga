#include <iostream>
using namespace std;

int main() {
	// Membuat segitiga sama kaki menggunakan looping
	// Membuat Variabel
	int n;
	
	// Title
	cout << "====+ Membuat Segitiga Sama Kaki +====" << endl << endl;
	
	// Masukkan nilai n
	cout << "Masukkan panjang sisi Segitiga : ";
	cin >> n;
	
	// Looping Pola 1
	cout << "Pola 1" << endl;
	for(int i = 1; i <= n; i++) {
		for(int j = n; j > i; j--) {
			cout << "   ";
		}
		for(int k = 1; k <= (2 * i - 1); k++) {
			cout << " * ";
		}
		cout << endl << endl;
	}
	
	// Looping Pola 2
	cout << "Pola 2" << endl;
	int m = n - 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cout << " * ";
		}
		cout << endl;
	}
	for(int i = 1; i <= m; i++) {
		for (int j = m; j >= i; j--){
			cout << " * ";
		}
		cout << endl;
	}	
	cout << endl;
	
	// Looping Pola 3
	cout << "Pola 3" << endl;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j < i; j++) {
			cout << "   ";
		}
		for(int k = n; k >= (2 * i - n); k--){
			cout << " * ";
		}
		cout << endl << endl;
	}
	
	// Looping Pola 4
	cout << "Pola 4" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = n; j > i; j--) {
			cout << "   ";
		}
		for(int k = 1; k <= i; k++) {
			cout << " * ";
		}
		cout << endl; 
	}
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= i; j++){
			cout << "   ";
		}
		for(int k = m; k >= i; k--){
			cout << " * ";
		}
		cout << endl;
	}
	
	return 0;
}
