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

void bubbleSortArray(){
    int pass = 1;                                   // Step 1 Memasukkan pass = 1

    do 
    {
        for (int j = 0; j <= n -1-pass;j++){        // Step 2 

            if (arr[j] > arr[j + 1] )               // Step 3
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] + temp;
            }  

        }

        pass = pass + 1;                            // Step 4

    }while (pass <= n - 1);                         // Step 5
}

void display (){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];                             // Menampilkan Array
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << endl;               // Menampilkan jumlah dari pass
    cout << endl;
    cout << endl;

}

int main(){

    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}