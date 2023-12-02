#include <iostream>
using namespace std;

int main(){
	
	int arr[5] = {60, 75, 80, 55, 90};
	int hasil = 0, rataRata;
	
	cout << "=====Array=====\n";
	
//	No 1 Menampilkan hasil penjumlahan array
	cout << "Soal No 1 Menampilkan hasil penjumlahan array\n";
	for(int i = 0; i < 5; i++){
		hasil+=arr[i];
	}
	
	cout << "Hasil Menjumlahkan : " << hasil << endl << endl;
	
//	No 2 Menampilkan rata rata
	cout << "Soal No 2 Menampilkan rata rata\n";
	rataRata = hasil / 5;
	cout << "Rata-rata : " << rataRata << endl << endl;
	
//	No 3 Menampilkan nilai array > 75
	cout << "No 3 Menampilkan nilai array > 75\n";
	cout << "Elemen array > 75 : ";
	for(int i = 0; i < 5; i++){
		if(arr[i] > 75){
			cout << arr[i] << " ";
		} 
	}
	
	cin.get();
	return 0;
}
