#include <iostream>
#include <cstdio>
using namespace std;

int  main() {
	string nama, nama_barang;
	int no_barang, harga, jumlah, potongan, bayar, kembalian;
	short qty;
	
	cout<<"****************PROGRAM KASIR TOKO KELONTONG**************************"<<endl<<endl;
	cout << "NAMA KASIR \t: ";
	getline(cin, nama);
	cout << "NO BARANG \t: ";
	cin >> no_barang;
	fflush(stdin);
	cout << "NAMA BARANG \t: ";
	getline(cin, nama_barang);
	cout << "HARGA \t\t: Rp.";
	cin >> harga;
	cout << "JUMLAH BARANG \t: ";
	cin >> qty;
	cout << "********************************************************************"<<endl;
	
	jumlah = qty * harga;
	
	cout << "JUMLAH YANG HARUS DI BAYAR : Rp." << jumlah << endl;
	fflush(stdin);
	cout << "POTONGAN \t: Rp.";
	cin >> potongan;
	cout << endl;
	
	cout << "PEMBAYARAN \t: Rp.";
	cin >> bayar;
	
	kembalian = bayar - (jumlah - potongan);
	cout << "KEMBALIAN \t: Rp."<<kembalian;
	return 0;
}
