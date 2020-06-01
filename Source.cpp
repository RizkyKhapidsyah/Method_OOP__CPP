#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class InventarisKantor
{
public:
	string Nama;
	int Jumlah;
	double Berat;

	/* Constructor atau Method Utama*/
	InventarisKantor(string paramNama, int paramJumlah, double paramBerat) {
		InventarisKantor::Nama = paramNama;
		InventarisKantor::Jumlah = paramJumlah;
		InventarisKantor::Berat = paramBerat;
	}

	/* Method Tanpa Parameter dan Tanpa Return */
	void TampilkanData() {
		cout << "================================" << endl;
		cout << "CONTOH 1" << endl;
		cout << "================================" << endl;
		cout << "Nama Barang     : " << Nama << endl;
		cout << "Jumlah Barang   : " << Jumlah << " unit" << endl;
		cout << "Berat Barang    : " << Berat << " kg" << endl << endl;
	}

	/* Method Dengan Parameter dan Return */
	void UbahNama_Cara1(string paramNamaBaru1) {
		InventarisKantor::Nama = paramNamaBaru1;
	}
	
	void UbahNama_Cara2(const char* paramNamaBaru2) {
		InventarisKantor::Nama = paramNamaBaru2;
	}

	/* Method Tanpa Parameter dan Dengan Return */
	string getNama() {
		return InventarisKantor::Nama;
	}

	int getJumlah() {
		return InventarisKantor::Jumlah;
	}

	/* Method Dengan Parameter dan Dengan Return */
	double tambahinBerat(const double& tambahanNilai) {
		return InventarisKantor::Berat + tambahanNilai;
	}

};

int main() {
	InventarisKantor IK1 = InventarisKantor("Meja", 4, 10);
	IK1.TampilkanData();

	IK1.UbahNama_Cara1("Lemari");
	IK1.TampilkanData();

	IK1.UbahNama_Cara2("Kursi");
	IK1.TampilkanData();

	/* Implementasi Dari Contoh: Method Tanpa Parameter dan Dengan Return */
	string dataNama = IK1.getNama();
	int dataJumlah = IK1.getJumlah();
	double dataTambahanNilai = IK1.tambahinBerat(3.2);
	
	cout << "Nama Terakhir Barang    : " << dataNama << endl;
	cout << "Jumlah Terakhir Barang  : " << dataJumlah << endl;
	cout << "Berat Terakhir Barang   : " << dataTambahanNilai << endl;

	_getch();
	return 0;
}

