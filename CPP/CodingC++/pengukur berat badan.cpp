#include <iostream>

using namespace std;

int main() {
    double berat, tinggi, bmi;

    cout << "Masukkan berat badan Anda dalam kilogram: ";
    cin >> berat;

    cout << "Masukkan tinggi badan Anda dalam centimeter: ";
    cin >> tinggi;

    // Konversi tinggi dari cm ke meter
    tinggi /= 100;

    // Hitung BMI
    bmi = berat / (tinggi * tinggi);

    cout << "Indeks Massa Tubuh (BMI) Anda adalah: " << bmi << endl;

    // Interpretasi BMI (sangat sederhana)
    if (bmi < 18.5) {
        cout << "Anda termasuk kategori kurang berat badan." << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Anda termasuk kategori berat badan normal." << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Anda termasuk kategori kelebihan berat badan." << endl;
    } else {
        cout << "Anda termasuk kategori obesitas." << endl;
    }

    return 0;
}