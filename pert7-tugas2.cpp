#include <iostream>
using namespace std;

int main(){
    int i, j, k, l;
    int matriks1[10][10], matriks2[10][10], matriksjml[10][10];

    cout << "======== Menambah DUA BUAH MATRIKS ======== \n";


    cout << "Masukkan jumlah baris : ";
    cin >> k;
    cout << "Masukkan jumlah kolom : ";
    cin >> l;

    cout << "Masukkan elemen matriks pertama \n";
    for (i=0; i<k; i++){
        for (j=0; j<l; j++){
            cout << "Masukkan baris ke " << i+1 << " kolom ke " << j+1 << " = ";
            cin >> matriks1 [i][j];
        }
    }

    cout << "Masukkan elemen matriks kedua : \n";
    for (i=0; i<k; i++){
        for (j=0; j<l; j++){
            cout << "Masukkan baris ke " << i+1 << " kolom ke " << j+1 << " = ";
            cin >> matriks2 [i][j];
        }
    }

    cout << "Hasil Perkalian Kedua Matriks Tersebut Adalah : \n";
    for (i=0; i<k; i++){
        for (j=0; j<l; j++){
            matriksjml [i][j] = matriks1 [i][j] + matriks2 [i][j];
            cout << matriksjml [i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}