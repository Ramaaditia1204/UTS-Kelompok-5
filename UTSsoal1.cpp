
#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaKaryawan;
    int golongan, jamKerja;

    // Input data karyawan
    cout << "Masukkan nama anda: ";
    getline(cin, namaKaryawan);
    cout << "Masukkan golongan anda: ";
    cin >> golongan;


    // Hitung upah pokok berdasarkan golongan
    int upahPokok;
    if (golongan == 1) {
        upahPokok = 25000;
    }
    else if (golongan == 2) {
        upahPokok = 35000;
    }
    else if (golongan == 3) {
        upahPokok = 50000;
    }
    else {
        cout << "Golongan tidak valid. Harap masukkan 1 - 3." << endl;
        return 0; // Keluar program dengan kode kesalahan
    }

    cout << "Masukkan jam kerja and seminggu: ";
    cin >> jamKerja;

    int total = upahPokok * jamKerja;

    // Hitung uang lembur (jika ada)
    int uangLembur = 0;
    if (jamKerja > 48) {
        uangLembur = (jamKerja - 48) * 10000;
    }

    // Hitung gaji total
    int gajiTotal = total + uangLembur;

    // Tampilkan hasil

    cout << " \n";
    cout << "Total Gaji " << namaKaryawan << " Per Minggu :" << gajiTotal << endl;

    return 0;
}
