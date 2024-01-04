#include <iostream>
using namespace std;

int main() {
    char ulang_07746;

    do {
        int baris_07746;

        // Input jumlah baris dari pengguna
        cout << " Masukkan baris :  " ;
        cin >> baris_07746;
        cout<< endl;

        for (int i_07746 = 1; i_07746 <= baris_07746; i_07746++) {
            for (int j_07746 = 1; j_07746 <= baris_07746; j_07746++) {

                if (i_07746 == 1 && j_07746 >= 1) {
                    cout << j_07746 << " ";
                }
                else if (i_07746 >= 1 && j_07746 == 1) {
                    cout << i_07746 << " ";
                }
                else if (i_07746 == baris_07746&& j_07746 <= 1) {
                    cout << baris_07746 << " ";
                }
                else if (i_07746 == baris_07746 && j_07746 >= baris_07746) {
                    cout << "# ";
                }


                else if (i_07746 == 1 || i_07746 == baris_07746 || j_07746 == 1 || j_07746 == baris_07746){
                    cout << "# ";
                }
                else if (i_07746 == j_07746 || i_07746 + j_07746 == baris_07746 + 1) {
                    cout << "+ ";
                }
                else {
                    cout <<  "* ";
                }
            }
            cout << endl;
        }
        cout << "Apa ingin mengulang? (tekan 1 jika iya) :  ";
        cin >> ulang_07746;
        cout << endl;
    } while (ulang_07746 == '1' );
}
