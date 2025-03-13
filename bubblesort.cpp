#include <iostream>
#include <string>
using namespace std;

int arr[20];                // Deklarasi Variabel global array a dengan ukuran 20
int n;                      // Deklarasi variabel global n untuk menyimpan banyaknya elemen pada array

void input() {              // Prosedur untuk input
    while(true) {
        cout << "Masukkan banyaknya elemen pada array : ";  // Output ke layar
        cin >> n;           // Input dari pengguna
        if (n <= 20)        // Jika data
            break;          // Menghentikan loop
        else{
            cout << "\nArray dapat mempunyai maksimal 20 elemen\n" << endl;
        }
    }


