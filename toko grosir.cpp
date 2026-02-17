#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double JB, HB, TB, diskon = 0, potongan, totalbayar;

    cout << "=== PROGRAM PENJUALAN TOKO GROSIR ===" << endl;
    cout << "Masukkan Jumlah Beli   = "; cin >> JB;
    cout << "Masukkan Harga Barang  = "; cin >> HB;

    // Hitung total belanja
    TB = JB * HB;

    // Tentukan diskon
    if (TB > 10000000) {
        diskon = 0.10; // 10%
    } else if (TB > 5000000) {
        diskon = 0.05; // 5%
    } else {
        diskon = 0; // tidak ada diskon
    }

    // Hitung potongan dan total bayar
    potongan = TB * diskon;
    totalbayar = TB - potongan;

    // Output hasil
    cout << fixed << setprecision(2);
    cout << "\nTotal Belanja  : Rp " << TB << endl;
    cout << "Diskon         : " << (diskon * 100) << "%" << endl;
    cout << "Potongan Harga : Rp " << potongan << endl;
    cout << "Total Bayar    : Rp " << totalbayar << endl;

    return 0;
}

