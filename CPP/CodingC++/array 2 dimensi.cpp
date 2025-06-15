#include <iostream>
using namespace std;

int main () {
    int air[2][3]; // Deklarasi array 2D dengan ukuran 2x3

    // Mengisi nilai ke array
    air[0][0] = 15;
    air[0][1] = 23;
    air[0][2] = 25;  // Tambahkan nilai untuk mengisi elemen kosong
    air[1][0] = 40;
    air[1][1] = 25;
    air[1][2] = 27;  // Tambahkan nilai untuk mengisi elemen kosong

    // Output nilai dari array
    cout << air[0][1];  // Menampilkan nilai air[0][1], yaitu 23
    cout << air[0][2];
    return 0;
}
