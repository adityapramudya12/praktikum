#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main() {

    string namaLengkap_07746, npm_07746, motivasi_07746;
    double tinggiTabung_07746, volumeTabung_07746, kelilingSegitiga_07746;
    float phi_07746 = 3.14;
    float r_07746,miring_07746, aT_07746, sA_07746, tS_07746, lS_07746;

    //aT = alas tabung
    //sA = setengah alas segitiga
    //tS = tingi segitiga
    //lS = luas segitiga


//input data pengguna
    cout << "Masukkan nama lengkap Anda: ";
    cin >> namaLengkap_07746;
    cout << "Masukkan NPM Anda: ";
    cin >> npm_07746;
    cout << "Motivasi Anda untuk masuk Teknik Informatika ITATS: ";
    cin >> motivasi_07746;


    cout << "Masukkan tinggi tabung :";
    cin >> tinggiTabung_07746;
    cout << "Masukkan volume tabung :";
    cin >> volumeTabung_07746;
    cout << "Masukkan keliling segitiga sama kaki: ";
    cin >> kelilingSegitiga_07746;

//menghitung jari jari alas tabung
    r_07746 = volumeTabung_07746 / (phi_07746 * tinggiTabung_07746);
    aT_07746 = r_07746;

//menghitungn panjang sisi miring pada segitiga
    miring_07746 = (kelilingSegitiga_07746 - aT_07746) / 2;

//menghitung setengah panjang alas segitiga
    sA_07746 = aT_07746 /2 ;

// menghitung segitiga menggunakan teorema pythagoras
    tS_07746 = sqrt (miring_07746 * miring_07746 - sA_07746 * sA_07746);

// menghitung luas segitiga sama kaki
    lS_07746 = (aT_07746 * tS_07746 / 2);


    cout << "=======Informasi yang telah diinput=========\n";

    cout << "Nama lengkap : " << namaLengkap_07746 << endl;
    cout << "NPM : " << npm_07746 << endl;
    cout << "Motivasi masuk Teknik Informatika ITATS : " << motivasi_07746 << endl;
    cout << "tinggi tabung :"<< tinggiTabung_07746 << endl;
    cout << "volume tabung :"<< volumeTabung_07746 << endl;
    cout << "keliling segitiga sama kaki: "<< kelilingSegitiga_07746 << endl;

    cout << "===========Hasil Perhitungan===============\n";

    cout << "Nilai Alas Segitiga :" << aT_07746 << endl;
    cout << "Nilai Sisi Miring Segitiga :" << miring_07746 << endl;
    cout << "Nilai tinggi Segitiga : " << tS_07746 << endl;
    cout << "Luas segitiga sama kaki : " << lS_07746 << endl;

    return 0;
}
