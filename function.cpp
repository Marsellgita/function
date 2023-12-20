#include <iostream>
#include <math.h>
using namespace std;

//  menghitung luas dan keliling lingkaran
void lingkaran(float jariJari) {
    float luas = 3.14 * jariJari * jariJari;
    float keliling = 2 * 3.14 * jariJari;
    cout << "Luas Lingkaran : " << luas << endl;
    cout << "Keliling Lingkaran : " << keliling << endl;
}

//  menghitung faktorial
float faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

// menghitung perpangkatan
float pangkat(float x, int p) {
    float hasil = 1.0;
    for (int i = 0; i < p; i++) {
        hasil *= x;
    }
}

int main() {
    int pilih;
    do {
        cout << "Berhitung\n";
        cout << "1. Luas dan Keliling Lingkaran\n";
        cout << "2. Faktorial\n";
        cout << "3. Perpangkatan\n";
        cout << "4. Exit\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
            case 1: {
                float jariJari;
                cout << "LUAS DAN KELILING LINGKARAN\n";
                cout << "Masukkan Jari-Jari : ";
                cin >> jariJari;
                lingkaran(jariJari);
                break;
            }

            case 2: {
                int n;
                cout << "FAKTORIAL\n";
                cout << "Masukkan Angka : ";
                cin >> n;
                cout << "Hasil faktorial dari " << n << " : " << faktorial(n) << endl;
                break;
            }

            case 3: {
                float x;
                int p;
                cout << "PERPANGKATAN \n";
                cout << "Masukkan Angka : ";
                cin >> x;
                cout << "Masukkan Pangkat : ";
                cin >> p;
                cout << "Perpangkatan : " << pangkat(x,p) << endl;
                break;
            }

            case 4: {
                cout << "Terimakasih";
                break;
            }

            default:
                cout << "Pilihan tidak valid" << endl;
        }
    } while (pilih != 4);

    return 0;
}

