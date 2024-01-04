#include <iostream>
using namespace std;

int main() {

    string namaLengkap, npm, motivasi;
    double tinggiTabung, volumeTabung, kelilingSegitiga, alasSegitiga, luasSegitiga;


    cout << "Masukkan nama lengkap Anda: ";
    cin >> namaLengkap;
    cout << "Masukkan NPM Anda: ";
    cin >> npm;
    cout << "Motivasi Anda untuk masuk Teknik Informatika ITATS: ";
    cin >> motivasi;


    cout << "Masukkan tinggi tabung: ";
    cin >> tinggiTabung;
    cout << "Masukkan volume tabung: ";
    cin >> volumeTabung;
    cout << "Masukkan keliling segitiga sama kaki: ";
    cin >> kelilingSegitiga;


    alasSegitiga = kelilingSegitiga / 2;


    luasSegitiga = 0.5 * alasSegitiga * tinggiTabung;


    cout << "\nInformasi yang telah diinput:" << endl;
    cout << "Nama lengkap: " << namaLengkap << endl;
    cout << "NPM: " << npm << endl;
    cout << "Motivasi masuk Teknik Informatika ITATS: " << motivasi << endl;


    cout << "\nHasil Perhitungan:" << endl;
    cout << "Luas segitiga sama kaki: " << luasSegitiga << endl;

    return 0;
}
