#include <iostream>
using namespace std;

int main(){
	int arr[5] = {60, 75, 80, 55, 90};
	int nilai, i, j, tmp;
		
	cout << "=====Mencari Nilai Array=====\n";
	cout << "Masukan nilai yang ingin dicari : ";
	cin >> nilai;
	
	for(i = 0; i < 5; i++){
		if(arr[i] == nilai){
			cout << "Nilai " << nilai << " berada pada indeks ke-" << i;
			break;
		} 
	}
	
	if (i >= 5){
		cout << "Nilai tidak ditemukan";
	}
	
	cout << endl << endl;
	cout << "=====Mengurutkan Nilai Array=====\n";
	for(i = 0; i < 4; i++){
		for(j = i+1; j < 5; j++){
			if(arr[i]>arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp; 
			}
		}
	}
	
	cout << "Data diurutkan : ";
	for(i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	
	cin.get();
	return 0;
}
