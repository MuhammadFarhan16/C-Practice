#include <iostream>
using namespace std;

int main(){
	int angka, pembagi = 0;
	
	cout << "Masukan angka : ";
	cin >> angka;
	
	for(int i = 1; i <= angka; i++){
		if(angka%i==0){
			pembagi += 1;
		}
	}
	
	if(pembagi == 2){
		cout << "termasuk bilangan prima";
	} else {
		cout << "bukan bilangan prima";
	}
	
	return 0;
}
