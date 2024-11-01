#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaKaryawan;
    int golongan, jamKerja;

    // Input data karyawan
    cout << "Masukkan nama karyawan: ";
    getline(cin, namaKaryawan);
    cout << "Masukkan golongan (2 atau 3): ";
    cin >> golongan;
    cout << "Masukkan jumlah jam kerja dalam seminggu: ";
    cin >> jamKerja;

    // Hitung upah pokok berdasarkan golongan
    int upahPokok;
    if (golongan == 2) {
        upahPokok = jamKerja * 35000;
    }
    else if (golongan == 3) {
        upahPokok = jamKerja * 50000;
    }
    else {
        cout << "Golongan tidak valid. Harap masukkan 2 atau 3." << endl;
        return 1; // Keluar program dengan kode kesalahan
    }

    // Hitung uang lembur (jika ada)
    int uangLembur = 0;
    if (jamKerja > 48) {
        uangLembur = (jamKerja - 48) * 10000;
    }

    // Hitung gaji total
    int gajiTotal = upahPokok + uangLembur;

    // Tampilkan hasil
 
    cout << "Gaji Total: Rp " << gajiTotal << endl;

    return 0;
}