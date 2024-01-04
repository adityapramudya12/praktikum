#include <iostream>

using namespace std;

int main() {
    const int MAX_BARANG = 5;
    string namaBarang[MAX_BARANG];
    double hargaBarang[MAX_BARANG];
    int jumlahBarang[MAX_BARANG];
    double diskon = 0.15, totalBelanja = 0, uangPelanggan, totalDenganDiskon,kembalian;
    int jumlah_jenis_barang;

    cout << "---------------------------------------------------\n";
    cout << "--------------- K A S I R I T A T S ---------------\n";
    cout << "---------------------------------------------------\n";
    cout << "Masukkan jumlah jenis barang: ";
    cin >> jumlah_jenis_barang;
    cout << "-----------------------------" << endl;

    for (int i = 0; i < jumlah_jenis_barang; ++i) {
        cout << "Masukkan barang ke-\n" << i + 1 <<endl;
        cout << "Nama barang                : ";
        cin >> namaBarang[i];

        cout << "Jumlah                    : ";
        cin >> jumlahBarang[i];

        cout << "Harga barang per unit     : ";
        cin >> hargaBarang[i];

        totalBelanja += hargaBarang[i] * jumlahBarang[i];

        cout << "-----------------------------\n";
    }

    cout <<"\n====================================================\n";
    cout <<"=========== Struk Pembelian Kasir ITATS ============\n";
    cout <<"====================================================\n";

    cout << "No Barang  Jumlah     Harga      Subtotal" << endl;

    for (int i = 0; i < jumlah_jenis_barang; ++i) {
        double subtotal = hargaBarang[i] * jumlahBarang[i];
        cout << i + 1 << "          " << jumlahBarang[i] << "          Rp." << hargaBarang[i] << "       Rp." << subtotal << endl;
    }
    cout <<"====================================================\n";

    totalDenganDiskon = totalBelanja - (totalBelanja * diskon);
    cout << "SELAMAT ANDA MENDAPATKAN DISKON 15%"<<endl;
    cout << "Jumlah Bayar  : Rp " << totalBelanja << endl;
    cout << "Diskon        : Rp " << totalBelanja * diskon << endl;
    cout << "Total Bayar   : Rp " << totalDenganDiskon << endl;
    cout << "Bayar         : Rp ";
    cin >> uangPelanggan;

    kembalian = uangPelanggan - totalDenganDiskon;
    cout << "Kembalian     : Rp " << kembalian << endl;
    cout << "-----------------------------\n";
    return 0;
}

