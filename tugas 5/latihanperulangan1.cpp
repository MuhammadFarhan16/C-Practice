#include <iostream>
using namespace std;

int main(){
	int rataRata, jumlah = 0, angka;
	
	cout << "Masukan Angka : ";
	cin >> angka;
	for(int i = 1; i <= angka; i++){
		cout << i << endl;
		jumlah += i;
	}
	rataRata = jumlah / angka;
	cout << "Rata-rata : " << rataRata;
	cin.get();
	return 0;
}
