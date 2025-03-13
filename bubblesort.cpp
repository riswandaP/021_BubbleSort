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


cout << endl;
cout << "=====================" << endl;
cout << "Masukkan elemen array" << endl;
cout << "=====================" << endl;

for (int i = 0; i <n; i++){                         // Membaca input dari pengguna dan menyimpannya dalam sebuah array. 
    cout << "Data ke-" << (i+1) << ";";
    cin >> arr[i];
}

}
