#include <iostream>
using namespace std;

int main() {
	int nik, gaji, tunjangan_kerja, total, upah_lembur;
	short jam;
	string nama_karyawan;
	
	cout << "::.............PROGRAM PENGGAJIAN...............::" << endl;
	cout << endl;
	
	cout << "NIK \t\t\t: ";
	cin >> nik;
	cout << "NAMA KARYAWAN \t\t: ";
	cin.ignore(1,'\n');
	getline(cin, nama_karyawan);
	cout << "GAJI POKOK (Rp.) \t: ";
	cin >> gaji;
	cout << "JUMLAH JAM LEMBUR \t: ";
	cin >> jam;
	
	cout << "--------------------------------------------------" << endl;
	cout << "NIK \t\t\t: " << nik << endl;
	cout << "NAMA KARYAWAN \t\t: " << nama_karyawan << endl;
	cout << "GAJI POKOK (Rp.) \t: " << gaji << endl;
	
	tunjangan_kerja = gaji * 0.10;
	cout << "TUNJANGAN KERJA (Rp.) \t: " << tunjangan_kerja << endl;
	
	upah_lembur = jam * (gaji * 0.05);
	cout << "UPAH LEMBUR (Rp.) \t: " << upah_lembur << endl;
	
	total = gaji + tunjangan_kerja + upah_lembur;
	cout << "TOTAL GAJI (Rp.) \t: " << total << endl;
}
