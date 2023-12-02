
#include <iostream>
#include <Windows.h>
#include <thread> // untuk menggunakan std::this_thread::sleep_for
#include <cstdlib> // mengandung fungsi rand() dan srand()
#include <ctime> // mengandung fungsi time()
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD initialPos;  // Digunakan untuk menyimpan posisi awal kursor
	
	// Mendapatkan posisi awal kursor
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    initialPos = csbi.dwCursorPosition;
    
    string nama, prodi, alamat, tanggal_lahir, tempat_lahir;
	char jenis_kelamin, status;
	short umur;
	int angkatan;
	long long npm;
	float tinggi_badan;
	double berat_badan;
	bool status_nikah;
	
	cout << "Siapa nama lengkap anda ?" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	getline(cin, nama);
	
    cout << "Apa program studi anda ?" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	getline(cin, prodi);
	
	cout << "Kapan tanggal lahir anda ?" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	getline(cin, tanggal_lahir);
	
	cout << "Dimana tempat anda lahir ?\t" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	getline(cin, tempat_lahir);
	
	cout << "Dimana alamat anda ?" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	getline(cin, alamat);
	
	cout << "Apa jenis kelamin anda ? [L/P]" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	cin >> jenis_kelamin;
	jenis_kelamin = toupper(jenis_kelamin);
	
	cout << "Berapa umur anda ?" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	cin >> umur;
	
	cout << "Berapa tinggi badan anda ?" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	cin >> tinggi_badan;
	
	cout << "Berapa berat badan anda ?" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	cin >> berat_badan;
	
	cout << "Apakah anda sudah menikah ? [y/t]" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	cin >> status;
	status = tolower(status);
	
	cout << "Berapa nomor NPM anda ?" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	cin >> npm;
	
	cout << "Anda termasuk angkatan berapa ? [21/22/23]" << endl;
	// menunggu satu detik
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "Jawab : ";
	cin >> angkatan;
	
	while (true) {
		// inisialisasi generator angka acak dengan waktu sistem saat ini
		srand(static_cast<unsigned int>(time(0)));
		
		int lower_bound = 1; // batas bawah
		int upper_bound = 15; // batas atas
		
		int random_number = rand() % (upper_bound - lower_bound + 1) + lower_bound;
		
		// Menampilkan teks di posisi kursor
        SetConsoleCursorPosition(hConsole, initialPos);
		
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\tVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVA\n";
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t Nama\t\t\t: " << nama << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t NPM\t\t\t: " << npm << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t Prodi\t\t\t: " << prodi << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t Angkatan\t\t: " << angkatan << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t Tempat, tgl Lahir\t: " << tempat_lahir << ", " << tanggal_lahir << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t Alamat\t\t\t: " << alamat << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		if (jenis_kelamin = 'L') {
			cout << "\t\t\t\t Jenis Kelamin\t\t: Laki-laki" << endl; 
		} else {
			cout << "\t\t\t\t Jenis Kelamin\t\t: Perempuan" << endl; 
		}
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t Umur\t\t\t: " << umur << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t Tinggi badan\t\t: " << tinggi_badan << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\t\t Berat badan\t\t: " << berat_badan << endl;
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		if (status = 'y') {
			status_nikah = true;      
			cout << "\t\t\t\t Status Menikah\t\t: "<< status_nikah << endl;
		} else {
			status_nikah = false;
			cout << "\t\t\t\t Status Menikah\t: "<< status_nikah << endl;
		}
		// menunggu satu detik
		this_thread::sleep_for(chrono::milliseconds(100));
		// mengubah warna teks	
		SetConsoleTextAttribute(hConsole, random_number);
		cout << "\t\t\tVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVA\n";
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		cout << "\t\t\t\t\t\t" << endl;
		
		// Menghapus teks dengan mengisi dengan spasi
        SetConsoleCursorPosition(hConsole, initialPos);
        std::string spaces(csbi.dwSize.X, ' ');  // Membuat string dengan spasi sebanyak lebar konsol
        std::cout << spaces;
	}
	
	cin.get();
	return 0;
}

