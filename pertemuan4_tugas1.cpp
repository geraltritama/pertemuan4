#include <iostream>

using namespace std;

// Fungsi untuk memeriksa apakah suatu bilangan adalah bilangan prima
bool bilPrima(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Fungsi untuk menampilkan faktor dari suatu bilangan
void faktor(int n) {
    cout << " (Faktor: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << ")";
}

int main() {
    int batas;
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << "Bilangan Genap: " <<endl;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i;
            faktor(i);
            jumlahGenap += i;
            cout << endl;
        }
    }
    cout << "Jumlah Bilangan Genap: " << jumlahGenap << endl;

    cout << "\nBilangan Ganjil: " << endl;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i;
            faktor(i);
            jumlahGanjil += i;
            cout << endl;
        }
    }
    cout << "Jumlah Bilangan Ganjil: " << jumlahGanjil << endl;

    cout << "\nBilangan Prima: " << endl;
    for (int i = 1; i <= batas; i++) {
        if (bilPrima(i)) {
            cout << i;
            faktor(i);
            jumlahPrima += i;
            cout << endl;
        }
    }
    cout << "Jumlah Bilangan Prima: " << jumlahPrima << endl;

    return 0;  // Mengembalikan 0 menandakan bahwa program berjalan dengan baik
}
