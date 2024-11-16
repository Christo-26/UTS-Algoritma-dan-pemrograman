#include <iostream>
using namespace std;

int main() {
    int bilangan;

    // Input bilangan
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    // Mengecek apakah bilangan genap atau ganjil
    if (bilangan % 2 == 0) {
        cout << "Bilangan tersebut adalah Genap." << endl;
    } else {
        cout << "Bilangan tersebut adalah Ganjil." << endl;
    }

    return 0;
}
