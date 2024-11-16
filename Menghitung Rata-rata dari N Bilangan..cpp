#include <iostream>
using namespace std;

int main() {
    int N;          // Jumlah bilangan
    double total = 0;  // Menyimpan jumlah total
    double bilangan;  // Menyimpan tiap bilangan yang diinputkan

    // Input jumlah bilangan
    cout << "Masukkan jumlah bilangan: ";
    cin >> N;

    // Input dan penjumlahan bilangan
    for (int i = 1; i <= N; i++) {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> bilangan;
        total += bilangan;  // Menambahkan bilangan ke total
    }

    // Menghitung rata-rata
    double rata_rata = total / N;

    // Output rata-rata
    cout << "Rata-rata dari " << N << " bilangan adalah: " << rata_rata << endl;

    return 0;
}
