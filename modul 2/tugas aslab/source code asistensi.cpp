#include <iostream>
using namespace std;

int main() {
    string kata_07746;

    cout << "masukkan kata : ";
    cin >> kata_07746;
    cout<<endl;

    for (int i_07746 = 0; i_07746 < kata_07746.length(); i_07746++) {
        for (int j_07746 = 0; j_07746 <= i_07746; j_07746++) {
            cout << kata_07746[j_07746] <<"";
        }
        cout << endl;
    }

    return 0;

}
