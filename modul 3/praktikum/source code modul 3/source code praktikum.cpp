#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char tulisan1_07746[100], tulisan2_07746[100];
    cout << "Masukkan kalimat: ";
    cin.getline(tulisan1_07746, 100);

    strcpy(tulisan2_07746, tulisan1_07746);
    strrev(tulisan1_07746);

    cout << "Kalimat dibalik : " << tulisan1_07746 << endl;
    cout << "Ejaan lama      : ";


    for (int i_07746 = 0; i_07746 < strlen(tulisan2_07746); i_07746++) {
        if (tulisan2_07746[i_07746] == 'u') {
            cout << "oe";
        } else if (tulisan2_07746[i_07746] == 'J') {
            cout << "DJ";
        } else if (tulisan2_07746[i_07746] == 'y') {
            cout << "j";
        } else if (tulisan2_07746[i_07746] == 'C') {
            cout << "TJ";
        } else {
            cout << tulisan2_07746[i_07746];
        }
    }

    return 0;
}
