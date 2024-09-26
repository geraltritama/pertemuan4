#include <iostream>
using namespace std;

int main() {
    int n; //n = bilangan fibonacci yang ingin di tampilkan
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    int a = 0, b = 1, c; // a(suku pertama)=0, b(suku kedua)=1, c = menyimpan hasil penjumlahan bilangan a dan b
    cout << "Deret Fibonacci: ";
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << a << " ";
            continue;
        }
        if (i == 1) {
            cout << b << " ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
